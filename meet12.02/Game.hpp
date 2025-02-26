#pragma once

#ifndef GAME_HPP
#define GAME_HPP

#include "Scene.hpp"




class Game {
public:
	Game();

	//�������� ���������� ��������� ���� 
	void Init();
	//�������� ������� ����
	void Play();
	//���������� ������� ������
	void Shutdown();





private:
	bool is_win();
	Scene scene;





};














#endif // !GAME_HPP