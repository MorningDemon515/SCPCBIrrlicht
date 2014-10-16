#ifndef ITEMPAPER_H_INCLUDED
#define ITEMPAPER_H_INCLUDED

#include "../items.h"

class itemPaper : public item {
    private:
        static irr::scene::IMeshSceneNode* baseNode; //the node that's cloned when a new item is created
        static btConvexHullShape* shape; //the collision shape used for the rigid body
        static irr::core::vector3df offset;

        itemPaper();

        //static irr::scene::IMesh* getMesh();
    public:

        itemTempIDs getTempID() {
            return itemTempIDs::ITEM_PAPER;
        }

        bool updateItem();

        static itemPaper* createItemPaper();

        static void setMeshNode(irr::scene::IMeshSceneNode* node);
		
		virtual std::string getInvName();
		virtual std::string getInvImgPath();

        virtual irr::core::vector3df getOffset();
};

#endif // ITEMPAPER_H_INCLUDED
