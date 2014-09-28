#ifndef ENDROOM_ROOM_INCLUDED
#define ENDROOM_ROOM_INCLUDED

class endroom : public room {
	private:
		static irr::scene::IMeshSceneNode* baseNode;
		static RMesh* baseRMesh;
		endroom() {};
	public:
		virtual roomTypes getType() { return roomTypes::ROOM1; }
		virtual void updateEvent() { return; }
		static void setBase(irr::scene::IMeshSceneNode* inNode,RMesh* inRme);
		static endroom* createNew(irr::core::vector3df inPosition,char inAngle);
};

#endif