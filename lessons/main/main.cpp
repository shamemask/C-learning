

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
        system("chcp 1251>nul");

    srand(time(0));
    int secret_number = 1 + rand() % 10;
    int attempts = 3;
    int user_number;
    cout << "��������� ������� ����� �� 1 �� 10. ���������� ��� �������." << endl;

    while (attempts > 0) {
        cout << "����� �����: ";

        cin >> user_number;

        if (secret_number > user_number) {

            cout << "��������� ����� ������" << endl;
        }
        if (secret_number < user_number) {

            cout << "��������� ����� ������" << endl;
        }
        if (secret_number == user_number) {

            cout << "�� ������" << endl;
            break;

        }
        attempts = attempts - 1;
        cout << "���������� �������: " << attempts << endl;
        if (attempts == 0) {

        cout << "�� ���������" << endl;

        cout << "��������� �����: " << secret_number << endl;

}
    }

    return 0;
}
