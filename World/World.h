#ifndef __WORLD_H_INCLUDED
#define __WORLD_H_INCLUDED

#include <algorithm>
#include <vector>
#include <iostream>

#include <AL/al.h>

#include <irrlicht.h>

#include <CGUITTFont.h>

#include <irrDynamics.h>
#include <btBulletCollisionCommon.h>
#include <btBulletDynamicsCommon.h>
#include "items/items.h"
#include "Rooms/Room.h"
#include "../Sound/soundWrapper.h"

#include "shadercallbacks.h"

const float RoomScale = 0.75f;

class MainEventReceiver : public irr::IEventReceiver {
	private:
        bool KeyIsDown[irr::KEY_KEY_CODES_COUNT];
        bool MouseIsDown[2];

        bool PrevKeyIsDown[irr::KEY_KEY_CODES_COUNT];
        bool PrevMouseIsDown[2];

        bool MouseDoubleClick[2];
        irr::core::position2di MousePosition;

        irr::u32 lastMouseClick;

        irr::u32 time;
        irr::u32 time1[2],time2[2];
    public:
		void setTime(irr::u32 inTime) {
			time=inTime;
		}

        virtual bool OnEvent(const irr::SEvent& event) {
            if (event.EventType == irr::EET_KEY_INPUT_EVENT) {
                KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;

                return true;
            } else if (event.EventType == irr::EET_MOUSE_INPUT_EVENT) {
                switch(event.MouseInput.Event) {
                    case irr::EMIE_LMOUSE_PRESSED_DOWN:
                        MouseIsDown[0] = true;
                        time2[0]=time1[0]; time1[0]=time;
                        if (time1[0]-time2[0]<=500) { MouseDoubleClick[0]=true; }
                    break;

                    case irr::EMIE_RMOUSE_PRESSED_DOWN:
                        MouseIsDown[1] = true;
                        time2[1]=time1[1]; time1[1]=time;
                        if (time1[1]-time2[1]<=500) MouseDoubleClick[1]=true;
                    break;

                    case irr::EMIE_LMOUSE_LEFT_UP:
                        MouseIsDown[0] = false;
                    break;

                    case irr::EMIE_RMOUSE_LEFT_UP:
                        MouseIsDown[1] = false;
                    break;

                    case irr::EMIE_MOUSE_MOVED:
                        MousePosition.X = event.MouseInput.X;
                        MousePosition.Y = event.MouseInput.Y;
                    break;

                    default:

                    break;
                }
                return true;
            }
            return false;
        }

        virtual bool IsKeyDown(irr::EKEY_CODE keyCode) const {
            return KeyIsDown[keyCode];
        }
        virtual bool IsPrevKeyDown(irr::EKEY_CODE keyCode) const {
            return PrevKeyIsDown[keyCode];
        }
        virtual bool IsMouseDown(unsigned char keyCode) const {
            return MouseIsDown[keyCode];
        }
        virtual bool IsPrevMouseDown(unsigned char keyCode) const {
            return PrevMouseIsDown[keyCode];
        }
        virtual bool IsDoubleClick(unsigned char keyCode) const {
            return MouseDoubleClick[keyCode];
        }
        virtual irr::core::position2di getMousePos() const {
            return MousePosition;
        }

		void perLoopUpdate() {
			MouseDoubleClick[0]=MouseDoubleClick[1]=false;
			memcpy(PrevKeyIsDown,KeyIsDown,sizeof(PrevKeyIsDown));
            memcpy(PrevMouseIsDown,MouseIsDown,sizeof(PrevMouseIsDown));
		}

        MainEventReceiver() {
            memset(KeyIsDown, false, sizeof(KeyIsDown));
            memset(PrevKeyIsDown, false, sizeof(PrevKeyIsDown));
            memset(MouseIsDown, false, sizeof(MouseIsDown));
            memset(PrevMouseIsDown, false, sizeof(PrevMouseIsDown));
            MousePosition = irr::core::position2di(0,0);
        }
};

struct TempPathList {
    TempPathList* prev = nullptr;
    unsigned char x,y;
    TempPathList* next = nullptr;
};

struct TempWPPathList {
    TempWPPathList* prev = nullptr;
    unsigned char index;
    TempWPPathList* next = nullptr;
};

class World {
    private:
        irr::video::E_DRIVER_TYPE irrDriverType;
        irr::IrrlichtDevice* irrDevice;
        irr::video::IVideoDriver* irrDriver;
        irr::scene::ISceneManager* irrSmgr;
		irr::scene::ISceneCollisionManager* irrColl;
        irr::gui::IGUIEnvironment* irrEnv;
        irr::io::IFileSystem* irrFileSystem;
        irr::ITimer* irrTimer;
        irr::u32 time;

        unsigned int mainWidth,mainHeight;

        MainEventReceiver* irrReceiver;

        irrDynamics* dynamics;

        class Player* mainPlayer;
        class NPC* testNPC;

        irr::core::vector2di marked;

        irr::video::ITexture* reflection;

        irr::video::ITexture* blurImage;
        irr::video::ITexture* blurImage2;
        irr::video::ITexture* finalImage;
        irr::scene::IMeshSceneNode* screenQuad;
        irr::video::ITexture* zBuffer;

        irr::video::ITexture* lightPass[2];

        irr::video::ITexture* fogTexture;

        irr::video::ITexture* lightDepth;

        unsigned char blurAlpha = 0;

        irr::video::ITexture* blinkMeterIMG;
        irr::video::ITexture* staminaMeterIMG;

        irr::u32 prevTime = 0;
        float fpsFactor = 1;

        irr::video::E_MATERIAL_TYPE roomShader, roomShader_noNormals, vertLightShader, vertLightShader_alpha,
                                    fogBillboardShader, normalsShader, plainLightShader, postProcShader,
                                    zBufferShader;

        RoomShaderCallBack* roomCallback;
        RoomShaderCallBack_noNormals* roomCallback_noNormals;
        VertLightShaderCallBack* vertLightCallback;
        NormalsShaderCallBack* normalsCallback;
        PlainLightShaderCallBack* plainLightCallback;
        PostProcShaderCallBack* postProcCallback;
        ZBufferShaderCallBack* zBufferCallback;

        std::vector<Item*> itemList;
        irr::scene::IMeshSceneNode* genItemNode(const std::string &meshPath,const std::string &texPath,float scale);

		Room* roomArray[20][20];

        void createMap(unsigned char zone);
        unsigned char currentZone = 0;
        Room* addRandomRoom(unsigned short x,unsigned short y,RoomTypes type,char angle,int zone);

        //pathfinding
        short stepPath(const irr::core::vector2di &endPos,TempPathList &RoomPath,int depth=0);

        irr::gui::CGUITTFont* font1;
        irr::gui::CGUITTFont* font2;

        int ppx,ppy;

        Sound* ambient[3];

		enum class menus {
			NONE,PAUSEOPEN,INVOPEN,OPTIONSOPEN
		};

		menus menusOpen = menus::NONE; unsigned char subMenusOpen = 0;
        menus prevMenusOpen = menus::NONE;

        irr::video::ITexture* pauseImgs[3];
        irr::video::ITexture* invImgs[10];
        bool itemSelected = false;

        bool button(const std::string &text,int x,int y,int w,int h);

        float scale2D = 1.f;
        float scale2Db = 1.f;

        unsigned char dragItem = 10;

        void draw3D();
        void drawFog();
        void drawHUD();

        irr::scene::IBillboardSceneNode* fogBillboards[50];
        irr::core::vector3df fogBillTargetPos[50];
        //float fogBillAlpha[50];

        std::string hudMsg = "";
        float hudMsgTimer = 0.f;

        void renderLights();

        irr::scene::ICameraSceneNode* smCamera;
    public:
        //main
        World(unsigned int width,unsigned int height,bool fullscreen = false);
        ~World();

        float getFPSfactor();

        bool run();

        unsigned char pickPlayerTriangle(irr::core::vector3df* intersec = nullptr,const irr::core::vector3df customEnd = (irr::core::vector3df(0.f,-204.8*RoomScale,0.f)));
        void getRoomList(const irr::core::vector2di &startPos,const irr::core::vector2di &endPos,std::vector<irr::core::vector2di> &RoomPath);
        void getRoomListToPlayer(const irr::core::vector2di &startPos,std::vector<irr::core::vector2di> &RoomPath);
        void npcPathFind(const irr::core::vector3df &startPos,const irr::core::vector3df &endPos,const irr::core::vector2di &RoomPos,std::vector<irr::core::vector3df> &posList);
};

//#include "Player.h"

extern int coordToRoomGrid(float coord);

bool getNodeTriangleTextureName(irr::scene::ISceneNode* node,const irr::core::triangle3df& tri,std::string& texname);

void trimFileName(std::string &inStr);

#endif // World_H_INCLUDED