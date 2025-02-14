#include "Scene.hpp"

Scene::PlacedObject::PlacedObject(GameObject* obj, Coord place)
	:obj_(obj),
	coord_(place)
{}



Scene::PlacedObject::PlacedObject(const PlacedObject& other)
{
}

bool Scene::PlacedObject::Interractr(const PlacedObject& other) const
{
	return coord_==other.coord_;
}

Coord Scene::PlacedObject::Where() const
{
	return coord_;
}

void Scene::PlacedObject::SetCoord(Coord new_place)
{
	coord_ = new_place;
}

int Scene::Size() const
{
	return placed_.size();
}

void Scene::Add(GameObject* obj, Coord place)
{
	placed_.emplace_back(obj, place);
}

GameObject& Scene::operator[](int i)
{

}
