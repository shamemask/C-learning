#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL, "Russian");

int a, b, c;

cout << "������� ������ �����: ";

cin >> a;

cout << "������� ������ �����: ";

cin >> b;

cout << "������� ������ �����: ";

cin >> c;

int maximum;

if (a > c) {

if (a > b) {

maximum = a;

}

else {

maximum = b;

}

}

else {

if (b > c) {

maximum = b;

}

else {

maximum = c;

}

}

cout << "������������ �����: " << maximum;

return 0;

}
