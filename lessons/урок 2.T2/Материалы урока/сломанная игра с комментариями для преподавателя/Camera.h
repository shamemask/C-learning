#pragma once
#include <SFML/Graphics.hpp>
#include "Mage.h" 
const int LEFT_BORDER = 400;// ������� ������ ����� 
const int RIGHT_BORDER = 860;// ������� ������ ������ 
const int UP_BORDER = 250;// ������� ������ ������ 
const int DOWN_BORDER = 470;//������� ������ ����� 

class Camera {// ����� ������� ������ 
private:

	View view;//������ View �� sfml ��� ������ � ������� 

	Mage* mage;// �������� ��������� �� ���� 

	void setCenter();// ������������ �������� ������ �� ������ 

	void init();//��������� ��������� ������ 

public:
	Camera(Mage* mage);//����������� ������, ����������� ��������� �� ������ ���� 

	void update();// ���������� ������

	View getView();// �������� ������ ������ View �� sfml. 
};