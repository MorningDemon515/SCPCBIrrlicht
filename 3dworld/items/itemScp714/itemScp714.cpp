#include "itemScp714.h"

irr::scene::IMeshSceneNode* itemScp714::baseNode = nullptr;
btConvexHullShape* itemScp714::shape = nullptr;
irr::core::vector3df itemScp714::offset = irr::core::vector3df(0,0,0);

itemScp714::itemScp714() {}

void itemScp714::setMeshNode(irr::scene::IMeshSceneNode* node) {
    if (itemScp714::baseNode == nullptr) {
        itemScp714::baseNode = node;
        node->setVisible(false);
    }
    node = nullptr;
}

itemScp714* itemScp714::createItemScp714() {
    if (itemScp714::baseNode == nullptr) return nullptr;

    if (itemScp714::shape == nullptr) {
		item::createShapeFromNode(itemScp714::baseNode,itemScp714::shape,itemScp714::offset);
	}

    itemScp714* newIt = new itemScp714;

    newIt->loadAssets(itemScp714::baseNode,itemScp714::shape);

    return newIt;
}

irr::core::vector3df itemScp714::getOffset() {
	return itemScp714::offset;
}

std::string itemScp714::getInvName() {
	return std::string("SCP-714");
}

bool itemScp714::updateItem() {
	return false;
}