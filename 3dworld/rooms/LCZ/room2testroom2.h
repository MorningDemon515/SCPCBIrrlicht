#ifndef ROOM2TESTROOM2_ROOM_INCLUDED
#define ROOM2TESTROOM2_ROOM_INCLUDED

class room2testroom2 : public room {
	private:
		static irr::scene::IMeshSceneNode* baseNode;
		static RMesh* baseRMesh;
		room2testroom2() {};
	public:
		virtual roomTypes getType() { return roomTypes::ROOM2; }
		virtual void updateEvent() { return; }
		static void setBase(irr::scene::IMeshSceneNode* inNode,RMesh* inRme);
		static room2testroom2* createNew(irr::core::vector3df inPosition,char inAngle);
};

#endif