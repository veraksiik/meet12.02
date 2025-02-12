#pragma once
#ifndef SCENE_HPP
#define SCENE_HPP

#include <List>
#include "Game_Object.hpp"
#include "Coord.hpp"

class Scene {
public:



private:
	class PlacedObject {
	public:
		PlacedObject(GameObject* obj, Coord place);


		Coord Where()const;
		GameObject* Who()const;
	private:
		GameObject *obj;
		Coord coord_;

	};
	std::list<PlacedObject> placed_;
};









#endif //!SCENE_HPP
