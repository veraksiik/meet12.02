#include "Scene.hpp"

Scene::PlacedObject::PlacedObject(GameObject* obj, Coord place)
	:obj_(obj),
	coord_(place)
{}

Scene::PlacedObject::~PlacedObject()
{
	delete obj_;
}

Scene::PlacedObject::PlacedObject(const PlacedObject& other)
{
}


