#ifndef GATEA_ROOM_INCLUDED
#define GATEA_ROOM_INCLUDED

class gatea : public room {
	private:
		static irr::scene::IMeshSceneNode* baseNode;
		static RMesh* baseRMesh;
		gatea() {};
	public:
		virtual roomTypes getType() { return roomTypes::ROOM1; }
		virtual void updateEvent() { return; }
		static void setBase(irr::scene::IMeshSceneNode* inNode,RMesh* inRme);
		static gatea* createNew(irr::core::vector3df inPosition,char inAngle);
};

#endif