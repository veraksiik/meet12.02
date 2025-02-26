#pragma once

#ifndef ACTION_HPP
#define ACTION_HPP

#include "Scene.hpp"
#include "Coord.hpp"
#include "Game_Object.hpp"

#include <functional>

class Action
{
public:
	Action(GameObject& who, Coord where, std::function<void(Scene&)> act)
		:who_(who), where_(where), action_(act)
	{}
	~Action() = default;

	void operator()(Scene& obj);


private:
	GameObject& who_;
	Coord where_;
	Scene* place_;
	std::function<void(Scene&)> action_;
};














#endif //!ACTION_HPP