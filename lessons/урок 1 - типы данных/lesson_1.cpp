#include <iostream> 

using namespace std; 

int main() 

{ 

system("chcp 1251>nul");

string name; //��� 

int age; //������� 

int number_class; //����� ������

char littera; //����� ������ 

int math; //������ �� ���������� 

int rus; //������ �� ��������

int info; //������ �� ����������� 

cout << "������� ���� ���: "; 

cin >> name; 

cout << "������� ��� �������: "; 

cin >> age; 

cout << "������� ��� ����� ������: "; 

cin >> number_class; 

cout << "������� ���� ����� ������: "; 

cin >> littera; 

cout << "������� ���� ������ �� ����������: "; 

cin >> math; 

cout << "������� ���� ������ �� ��������: "; 

cin >> rus; 

cout << "������� ���� ������ �� �����������: "; 

cin >> info; 

cout << "������! ���� ����� " << name << ". ��� " << age << " ���. � ����� � " << number_class << littera << " ������. ��� ������� ������ �� ���������: " << ((float)(math + rus + info))/3;

return 0; 

} 