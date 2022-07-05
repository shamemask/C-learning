#pragma once// ������ �� ���������� �����������

#include <SFML/Graphics.hpp> // ����������� sfml

using namespace sf; // ����� �� ������ sf::

class Mage { // ������� ����� ����  
private:// ������ ����� init � ��� ���� ���������� 

	Vector2f position; // ������� ����

	Vector2f speed; // �������� ����

	Sprite sprite; // ������ ����

	Texture texture; // �������� ����

	void init(); // �������� ��������� ��������� ���� 

	int width = 32;

	int height = 48;

	void dontMoveBehindMap();// ��� �� ������ ��������� �� ����� 
public:
	float currentFrame = 0;
	Mage(); // �����������
	void update();
	void setPosition(Vector2f pos); // ������ �������
	void setTextureRect(IntRect rect); // ������ ������
	void setSpeed(Vector2f speed); // ������ ��������
	void setWidth(int width);// ����� ������ ���������
	void setHeight(int height);// ����� ������ �����
	Vector2f getPosition(); // �������� �������
	Sprite getSprite();// �������� ������
	Vector2f getSpeed();// �������� ��������
	int getWidth();//��������� �������� ������ ���������
	int getHeight();//��������� �������� ������ �������� �����
};