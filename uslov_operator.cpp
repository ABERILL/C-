#include <iostream>

using namespace std;

int main()
{


    int year;
    cout << "������� ����� ���� (������������� ����� �����): ";
    cin >> year;
    int days = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) ? 366 : 365;
    cout << "���������� ���� � ���� ���� " << days << endl;
    return 0;
}