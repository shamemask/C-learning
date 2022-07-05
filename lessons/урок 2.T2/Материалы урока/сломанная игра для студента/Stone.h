#pragma once

#include <SFML/Graphics.hpp>//����������� sfml 

using namespace sf;//������������� ������������ ��� sf 

class Stone {//����� ����� 

private://��������� ���� 

	Vector2f position;//������� ����� 

	Sprite sprite;//������ �����

	Texture texture;//�������� �����

	void init();//��������� �������� ����� 

	Stone(Vector2f position);//����������� ������ 

	void setPosition(Vector2f position);// ������ ������� �����

	void setTextureRect(IntRect rect);//������ �������� �����

	Sprite getSprite();// �������� ������ �����

};