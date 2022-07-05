#include "Scroll.h"// ����������� ������������� ����� ������ 

Scroll::Scroll(Vector2f position) {//����������� ������ 

	init();// ����� �������� ��������� ��������� 

	setPosition(position);//����� �������� ������� 

}

void Scroll::init() {// ��������� ��������� ������. 

	Image image;//������� ������ ����������� ������

	image.loadFromFile("images/scroll.png");//��������� ����������� ������

	texture.loadFromImage(image);//��������� �������� ������ �� �����������

	sprite.setTexture(texture);//����� ������� ��������

}

void Scroll::setPosition(Vector2f position) {//������ ������� ������ 

	this->position = position;// ����� ������� ������

	sprite.setPosition(position.x, position.y);//������ ������� �������

}

void Scroll::setTextureRect(IntRect rect) {//������ �������� 

	sprite.setTextureRect(rect); //����� ������� ��������

}

void Scroll::setWidth(int width) {//������ ������ 

	this->width = width;//����� ������ ������

}

void Scroll::setHeight(int height) {// ������ ������ ������ 

	this->height = height;// ����� ������ ������

}

int Scroll::getWidth() {// �������� ������ ������ 

	return width;//�������� ������ ������ 

}


int Scroll::getHeight() {//�������� ������ ������ 

	return height;// �������� ������ ������ 

}

Sprite Scroll::getSprite() { //�������� ������ ������ 

	return sprite;// �������� ������ ������

}