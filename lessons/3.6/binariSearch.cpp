#include <iostream>

using namespace std;

int main()

{
    system("chcp 1251>nul");
    int left, right, len, current;
    char s;
    cout << "����������� �����: ";
    cin >> left;
    cout << "������������ �����: ";
    cin >> right;
    cout << "������� ����� �� " << left << " �� " << right << ", � � ������� ��� ����� ��� �� 10 �����" << endl;
    int attempts = 0;
    while (true) {
        attempts++;
        cout << "������ " << attempts << " �������" << endl;
        len = right - left;
        current = len / 2 + left;
        cout << "���� ����� - "<< current<< "? (=, >, <)";
        cin >> s;
        if (s == '>') {
            left = current + 1;
            cout << "����� ������� - " << left << ", ������ ������� - " << right << endl;
        }
        else if (s == '<') {
            right = current - 1;
            cout << "����� ������� - " << left << ", ������ ������� - " << right << endl;
        }
        else {
            cout << "� ������, ���!" << endl;
            break;
        }
    }
    return 0;
}
