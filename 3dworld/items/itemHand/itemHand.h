#ifndef ITEMHAND_H_INCLUDED
#define ITEMHAND_H_INCLUDED

#include "../items.h"

class itemHand : public item {
    private:
        static irr::scene::IMeshSceneNode* baseNode; //the node that's cloned when a new item is created
        static btConvexHullShape* shape; //the collision shape used for the rigid body
        static irr::core::vector3df offset;

        itemHand();

        //static irr::scene::IMesh* getMesh();
    public:

        itemTempIDs getTempID() {
            return itemTempIDs::ITEM_HAND;
        }

        bool updateItem();
		void updateWearing();
		void drawItem();

        static itemHand* createItemHand();

        static void setMeshNode(irr::scene::IMeshSceneNode* node);
		
		virtual std::string getInvName();
		virtual std::string getInvImgPath();

        virtual irr::core::vector3df getOffset();
};

#endif // ITEMHAND_H_INCLUDED
