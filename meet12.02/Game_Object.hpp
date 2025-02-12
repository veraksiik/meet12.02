#pragma once
#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include <iostream>
#include "Coord.hpp"
#include "Status.hpp"
#include "Controller.hpp"



class GameObject {
public:
	virtual ~GameObject() = default;

	virtual bool IsHarmable()const = 0;
	virtual bool Action(int tick)const = 0;
	virtual Coord Move() = 0;
	virtual void Modify(GameObject& obj) = 0;
	virtual void TakeHarm(int amount) = 0;
	virtual Status* GetStatus() = 0;
	virtual void SetController(const Controller* odj) = 0;

private:
	Controller* controller_;



};







#endif // !GAME_OBJECT_HPP
