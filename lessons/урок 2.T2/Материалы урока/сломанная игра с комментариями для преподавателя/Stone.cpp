#include "Stone.h"// ����������� ������������� ����� ����� 

// 7. ���������� ���� �����, ����� ���� ����������� ���������, ��� ����� ������� �� ������� ���� ����
//#include "Map.h"


Stone::Stone(Vector2f position) {//����������� ������ 

	init();// ����� �������� ��������� ��������� 

	setPosition(position);//����� �������� ������� 

// 5. �������� ��������� �������� � �����������
	//setSpeedY(0.1);

}

void Stone::init() {// ��������� ��������� �����

	Image image;//������� ������ ����������� �����

	image.loadFromFile("images/stone.png");//��������� ����������� �����

	texture.loadFromImage(image);//��������� �������� ����� �� �����������

	sprite.setTexture(texture);//����� ������� ��������

//13. �������� �������, ����� ��������� �������
	//sprite.setScale(0.05, 0.05);//��������� ������

}

void Stone::setPosition(Vector2f position) {//������ ������� ������ 

	this->position = position;// ����� ������� ������

	sprite.setPosition(position.x, position.y);//������ ������� �������

}

// 4. ����� ����������� ������ �������� �������
/*void Stone::setSpeedY(float speedY) {//������ �������� ������� �����

	this->speedY = speedY;
}*/

void Stone::setTextureRect(IntRect rect) {//������ �������� 

	sprite.setTextureRect(rect); //����� ������� ��������

}


Sprite Stone::getSprite() { //�������� ������ ������ 

	return sprite;// �������� ������ ������

}

//6. ����������� ����� ����������
/*void Stone::update() {
	sprite.move( 0 , speedY );
	position = sprite.getPosition();
	if (position.y > WINDOW_HEIGHT)
	{
		position.y = 0;
		setPosition(Vector2f(position.x, position.y));
	}
}*/