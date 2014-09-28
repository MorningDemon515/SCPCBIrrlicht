#include "../room.h"
#include "endroom2.h"

irr::scene::IMeshSceneNode* endroom2::baseNode = nullptr;
RMesh* endroom2::baseRMesh = nullptr;

void endroom2::setBase(irr::scene::IMeshSceneNode* inNode,RMesh* inRme) {
	if (endroom2::baseNode==nullptr || endroom2::baseRMesh==nullptr) {
		endroom2::baseNode = inNode; endroom2::baseRMesh = inRme; endroom2::baseNode->setVisible(false);
	}
}

endroom2* endroom2::createNew(irr::core::vector3df inPosition,char inAngle) {
	endroom2* retRoom = new endroom2;

	retRoom->node = baseNode->clone(); retRoom->node->setVisible(true);
	retRoom->node->setPosition(inPosition);
	retRoom->node->setRotation(irr::core::vector3df(0,inAngle*90.f,0));
	retRoom->angle = inAngle;

	//Add the Bullet rigid body
	retRoom->node->updateAbsolutePosition();
	irr::core::vector3df irrPos = retRoom->node->getAbsolutePosition();
	btVector3 btPos(irrPos.X, irrPos.Y, irrPos.Z);
	btTransform Transform;
	Transform.setIdentity();
	Transform.setOrigin(btPos);
	btQuaternion btRot;
	irr::core::vector3df irrRot = retRoom->node->getRotation();
	btRot.setEulerZYX(irrRot.Z*irr::core::DEGTORAD,irrRot.Y*irr::core::DEGTORAD,irrRot.X*irr::core::DEGTORAD);
	Transform.setRotation(btRot);

	btDefaultMotionState *MotionState = new btDefaultMotionState(Transform);

	btVector3 localInertia;
	endroom2::baseRMesh->shape->calculateLocalInertia(0.0, localInertia);

	retRoom->rbody = new btRigidBody(0.0, MotionState, endroom2::baseRMesh->shape, localInertia);
	room::dynamics->sharedRegisterRBody(retRoom->node,retRoom->rbody,0.f);

	retRoom->rbody->setFriction(1.f);
	retRoom->rbody->setRollingFriction(1.f);
	return retRoom;
}