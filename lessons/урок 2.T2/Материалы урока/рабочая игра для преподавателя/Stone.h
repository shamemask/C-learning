#pragma once

#include <SFML/Graphics.hpp>//����������� sfml 

using namespace sf;//������������� ������������ ��� sf 

class Stone {//����� ����� 

private://��������� ���� 

	Vector2f position;//������� �����
//1. �������� �������� ������� �����
	float speedY; //�������� ������� ����� 

	Sprite sprite;//������ �����

	Texture texture;//�������� �����

	void init();//��������� �������� ����� 

// 11. ������� ����������� public, ����� ������� ������ ����������
public://��������� ���� 
	Stone(Vector2f position);//����������� ������ 

// 3. �������� ����� ���������� �����
	void update();

	void setPosition(Vector2f position);// ������ ������� �����
//2. �������� ������ ��������
	void setSpeedY(float speed);// ������ �������� �������

	void setTextureRect(IntRect rect);//������ �������� �����

	Sprite getSprite();// �������� ������ �����

};