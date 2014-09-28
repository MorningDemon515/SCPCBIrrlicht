#ifndef GATEAENTRANCE_ROOM_INCLUDED
#define GATEAENTRANCE_ROOM_INCLUDED

class gateaentrance : public room {
	private:
		static irr::scene::IMeshSceneNode* baseNode;
		static RMesh* baseRMesh;
		gateaentrance() {};
	public:
		virtual roomTypes getType() { return roomTypes::ROOM1; }
		virtual void updateEvent() { return; }
		static void setBase(irr::scene::IMeshSceneNode* inNode,RMesh* inRme);
		static gateaentrance* createNew(irr::core::vector3df inPosition,char inAngle);
};

#endif