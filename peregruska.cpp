#16
#include <string>
#include <iostream>

using namespace std;

class Goods
{
private:

    string name;   //��������
    string date;    //���� ����������
    int price;       //����
    int amount;   //����������
    int number;   //����� ���������

public:

    //����������� �� ���������
    Goods()
    {
        name = "";
        date = "";
        price = 0;
        amount = 0;
        number = 0;

    }

    //����������� � �����������
    Goods(string s1, string s2, int p, int a, int n)
    {
        name = s1;
        date = s2;
        price = p;
        amount = a;
        number = n;
    }

    //�������� �������� ������
    string GetName()
    {
        return name;
    }

    //������ �������� ������
    void SetName(string s)
    {
        name = s;
    }

    //�������� ���� ����������
    string GetDate()
    {
        return date;
    }

    //������ ���� ����������
    void SetDate(string s)
    {
        date = s;
    }

    //�������� ���� ������
    int GetPrice()
    {
        return price;
    }

    //������ ���� ������
    void SetPrice(int p)
    {
        price = p;
    }

    //�������� ���������� ������
    int GetAmount()
    {
        return amount;
    }

    //������ ���������� ������
    void SetAmount(int a)
    {
        amount = a;
    }

    //�������� ����� ���������
    int GetNumber()
    {
        return number;
    }

    //������ ����� ���������
    void SetNumber(int n)
    {
        number = n;
    }

    //�������� ���� ������ � ���� ������
    string ToStringPrice()
    {
        string s = "";
        int i;

        for (i = price; i > 9; i /= 10) s += to_string(i % 10);

        s += to_string(i);
        reverse(s.begin(), s.end());
        return s;
    }

    //�������� ����� ���������
    int GetTotalCost()
    {
        return price * amount;
    }

    //�������� ��������� ��������� ����� ������
    int GetCost(int n)
    {
        return price * n;
    }

    //���������� ������ ��������� �� �������� �����
    void AmountIncrease(int n)
    {
        amount += n;
    }

    //���������� ������ ��������� �� �������� �����
    void AmountDecrease(int n)
    {
        amount -= n;
    }

};