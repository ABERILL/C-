#include <iostream>
#include <cmath>
#include <vector>




using namespace std;

int main()
{
    int a, b;
    cout << "�������� 1 �������" << endl;
    cin >> a;
    cout << "�������� 2 �������" << endl;
    cin >> b;

    vector <int> v_1(a);
    vector <int> v_2;
    v_2.reserve(b);

    int sum = a + b;

    if (sum > 9 && sum < 100)
        std::cout << "����� ��������� �������� ����������� ���������";
    else
        std::cout << "����� ��������� �� �������� ������������ ������";

}

