#pragma once
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Game_Object.hpp"
#include "Action.hpp"


class Player :public GameObject {
	Coord Move() override {
		return controller_->make_move(*this);
	
	}
	bool IsHarmable()const override {
		return true;
	}
	void TakeHarm(int amount) override {
		hitpoint_ -= amount;
	
	}
private:
	int hitpoint_;

};








#endif