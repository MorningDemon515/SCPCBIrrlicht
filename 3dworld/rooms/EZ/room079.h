#ifndef ROOM079_ROOM_INCLUDED
#define ROOM079_ROOM_INCLUDED

class room079 : public room {
	private:
		static irr::scene::IMeshSceneNode* baseNode;
		static RMesh* baseRMesh;
		room079() {};
	public:
		virtual roomTypes getType() { return roomTypes::ROOM1; }
		virtual void updateEvent() { return; }
		static void setBase(irr::scene::IMeshSceneNode* inNode,RMesh* inRme);
		static room079* createNew(irr::core::vector3df inPosition,char inAngle);
};

#endif