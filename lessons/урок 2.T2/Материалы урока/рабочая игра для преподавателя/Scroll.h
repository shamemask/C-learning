#pragma once// ������ �� ���������� ����������� 

#include <SFML/Graphics.hpp>//����������� sfml 

using namespace sf;//������������� ������������ ��� sf 

class Scroll {//����� ������ 
private://��������� ���� 

	Vector2f position;//������� ������ 
	Sprite sprite;//������ ������
	Texture texture;//�������� ������

	void init();//��������� �������� ������ 

	int width = 25;//������ ������ 
	int height = 25;//������ ������
public://��������� ���� 

	Scroll(Vector2f position);//����������� ������ 

	void setPosition(Vector2f position);// ������ ������� ������
	void setTextureRect(IntRect rect);//������ �������� ������ 
	void setWidth(int width);// ������ ������ ������ 
	void setHeight(int height);// ������ ������ ������

	Sprite getSprite();// �������� ������ ������
	int getWidth();// �������� ������ ������
	int getHeight();// �������� ������� ������
};