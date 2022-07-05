#include "Camera.h" 
void Camera::init() {

	view.reset(sf::FloatRect(0, 0, 800, 500));//��������� ��������� 
} 

Camera::Camera(Mage* mage) {

	this->mage = mage;//����� ����

	init();//����� ��������� ��������� ������ 

}

void Camera::setCenter() {
	int playerX = mage->getPosition().x;//������� ���������� ���� �� ��� x.

	int playerY = mage->getPosition().y;//������� ���������� ���� �� ��� y 

	if (playerX < LEFT_BORDER) {// ����������� ������� ����� 

		playerX = LEFT_BORDER;

	}
	if (playerX > RIGHT_BORDER) {// ����������� ������� ������ 

		playerX = RIGHT_BORDER;

	}

	if (playerY < UP_BORDER) {// ����������� ������� ������

		playerY = UP_BORDER;

	}

	if (playerY > DOWN_BORDER) {// ����������� ������� �����

		playerY = DOWN_BORDER;

	}

	view.setCenter(playerX, playerY);// ����� ���������� ������ ������
}

void Camera::update() {
	setCenter();
}
View Camera::getView() {
	return view;
}