#pragma once
#ifndef SCENE_HPP
#define SCENE_HPP

#include <List>
#include "Game_Object.hpp"
#include "Coord.hpp"



class Scene {
	class PlacedObject;
public:

	int Size()const;
	void Add(GameObject* obj, Coord place);

	int Find(Coord place_object)const;
	void Remove(int index);

	PlacedObject& operator[](int i);



private:
	class PlacedObject {
	public:
		PlacedObject(GameObject* obj, Coord place);


		//~PlacedObject();
		//PlacedObject(const PlacedObject& other);
		//PlacedObject& operator = (const PlacedObject& other);
		//������� 3 ������������ ���������� ��������
		//� ������� ������ � ���� obj_

		bool Interractr(const PlacedObject& other)const;
		
		Coord Where()const;
		GameObject* Who()const;

		void SetCoord(Coord new_place);
	private:
		GameObject *obj_;
		Coord coord_;

	};
	
	std::list<PlacedObject> placed_;
};









#endif //!SCENE_HPP
