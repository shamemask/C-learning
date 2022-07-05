#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Windows.h"
using namespace std;

const int namesCount = 5;
const string names[namesCount] = {
	"��������� ������� ����� ",
	"�������� ���������-���  ",
	"������� ��������-�������", 	
	"����������� 3�-����     ",
	"���������� �������      "
};

int getRandom(int min, int max) {
	return rand() % (max - min + 1) + min;
}

class Order {
private:
	string name; //��������
	float price; // ����
	int timeWork; //����� ����������
public:
	Order();
	void print();
	int getTime();
	float getPrice();
	void setTime( int time );
};

Order::Order() {
	name = names[getRandom(0, namesCount - 1 )]; //��������
	price = getRandom(10000, 30000); // ����
	timeWork = getRandom(3, 10); //����� ����������
}
void Order::print() {
	cout << "---------------------------------" << endl;
	cout << "�����: " << name << "  |  ";
	cout << "����: " << price << "  |  ";
	cout << "����� ����������: " << timeWork << "  |  " << endl;
}

void Order::setTime( int time ) {
	timeWork = time;
}

int Order::getTime() {
	return timeWork ;
} 

float Order::getPrice() {
	return price;
}

class Company {
private:
	string name; //��������
	float money; //������ �����
	int employees; //���������� ����������
	int orders; //���������� ����������� �������
	float salary; //�������� 1 ���������
public:
	Company();
	void print();
	bool doOrder( Order *currentOrder);
	bool paySalary();
	void hireEmploees();
	float getMoney();
};

Company::Company() {
	cout << "�������� ��������: ";
	cin >> name; //��� ������� � ����������
	money = 0;     //���� �� ����� ��� �� �����
	employees = 1;//���� �� 1 �������� ����, �� �� - ��������
	orders = 0;//������� ��� �� ���������
	cout << "��������: ";
	cin >> salary; //�������� 1 ���������
}

void Company::print() {
	cout << "��������: " << name << endl;
	cout << "������: " << money << endl;
	cout << "���������� ����������: " << employees << endl;
	cout << "��������� �������: " << orders << endl;
	cout << "��������: " << salary << endl;
}

bool Company::doOrder( Order* currentOrder )
{
	cout << "�������� �����: " << endl;
	currentOrder->print();
	
	currentOrder->setTime(currentOrder->getTime() - 1 * employees);
	bool result = false;

	if (currentOrder->getTime() > 0)
	{
		cout << "�� ��������� ���������� ������ ��������: " << currentOrder->getTime() << " ��." << endl;
		result = false;
	}
	else
	{
		cout << "����� ��������"<<endl;
		money += currentOrder->getPrice();
		orders++;
		result = true;
	}
	Sleep(1500);
	return result;
}

bool Company::paySalary()
{
	float summa = salary * employees;
	money -= summa;
	cout << "!!!��������� ��������!!! "<< summa<<endl;
	if (money >= 0)
		return true;
	else
		return false;
}

void Company::hireEmploees()
{
	int count;
	cout << "������� ������ ����� ����������? ";
	cin >> count;

	employees += count;
	if (count > 0)
		cout << "!!!������ ����������!!!" << endl;
}
float Company::getMoney() {
	return money;
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	cout << "������! ������� � ���� ���� ���� ������� � ������� ����������� IT-��������." << endl;
	Company myCompany;
	
	int day = 1;
	int currentOrderNumber = -1;

	int orderCount = getRandom(3, 10);
	Order* orderList = new Order[orderCount];

	int gameState = 0;
	while ( gameState == 0 )
	{
		system("cls");
		cout << "���� " << day << endl << endl;

		if (day % 15 == 0)
		{
			if(!myCompany.paySalary())
				gameState = -1;
		}

		if (myCompany.getMoney() >= 1000000)
		{
			gameState = 1;
		}

		
		if (gameState == 0)
		{
			myCompany.print();

			if (day % 10 == 0)
				myCompany.hireEmploees();

			if (currentOrderNumber == -1)
			{
				cout << "������ �������: " << endl;

				for (int i = 0; i < orderCount; i++)
				{
					orderList[i].print();
					cout << "����� ������: " << i << endl;
				}

				cout << "�������� ����� �� ������: " << endl;
				cin >> currentOrderNumber;
			}

			if (myCompany.doOrder(&orderList[currentOrderNumber]))
			{
				currentOrderNumber = -1;
				delete[] orderList;
				orderCount = getRandom(3, 10);
				orderList = new Order[orderCount];
			}

			day++;
		}
	}

	if (gameState == 1)
		cout << "�����������! �� ���������!" << endl;
	else
		cout << "�� �������! ���������� ��� ���..." << endl;

	delete[] orderList;
	
	
	return 0;
}
