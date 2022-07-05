#include "Mage.h"

#include "Map.h"


Mage::Mage() {

	init();

}
void Mage::init() {

	sf::Image image;// ������ �����������

	image.loadFromFile("images/mage.png");// ��������� ���

	texture.loadFromImage(image);// ��������� ��������

	sprite.setTexture(texture);// ����� ������� ��������  

	setTextureRect(IntRect(0, 0, width, height)); //������ ������ �� ������

	setPosition(Vector2f(300, 300));// ����� ������ �������

}


void Mage::setPosition(Vector2f pos) {

	position = pos; 
	sprite.setPosition(position.x, position.y);
}

void Mage::setSpeed(Vector2f speed) {

	this->speed = speed;

}

void Mage::setWidth(int width) {

	this->width = width;//������ ������ ����� ������.

}

void Mage::setHeight(int height) {

	this->height = height;

}

void Mage::setTextureRect(IntRect rect) {

	sprite.setTextureRect(rect);
}

Vector2f Mage::getPosition() {

	return sprite.getPosition();

}

Vector2f Mage::getSpeed() {

	return speed;

}

Sprite Mage::getSprite() {

	return sprite;

}

int Mage::getWidth() {

	return width;

}

int Mage::getHeight() {

	return height;

}

void Mage::update() {
	sprite.move(speed.x, speed.y);
	position = sprite.getPosition();
	dontMoveBehindMap();// �� ������ ������ ����� �� ������� �����
}
void Mage::dontMoveBehindMap() {// ���������� �������� ���� �� ��������� �����

	if (position.x > WINDOW_WIDTH - width) {// ���� ����� �� ������� ������

		position.x = WINDOW_WIDTH - width;// ������ ������� ��� ����� �� ����� �� �����.

		setPosition(Vector2f(position.x, position.y));// ��������� ���������.

	}
	if (position.x < 0) {// ���� ������� ���� �� x ������ 0

		position.x = 0;// ������ ������� �� x=0

		setPosition(Vector2f(position.x, position.y));//������������� ���������

	}

	if (position.y < 0) {// ���� ������� �� y ������ 0

		position.y = 0;// ������ ������� �� y = 0

		setPosition(Vector2f(position.x, position.y));// ������������� ���������

	}

	if (position.y > WINDOW_HEIGHT - height) {// ���� ����� �� ������� ������

		position.y = WINDOW_HEIGHT - height;// ������ ������� ��� ����� ����������� � �� ������� �� �������

		setPosition(Vector2f(position.x, position.y));// ������������� ���������

	}
}