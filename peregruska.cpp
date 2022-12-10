#16
#include <string>
#include <iostream>

using namespace std;

class Goods
{
private:

    string name;   //название
    string date;    //дата оформления
    int price;       //цена
    int amount;   //количество
    int number;   //номер накладной

public:

    //конструктор по умолчанию
    Goods()
    {
        name = "";
        date = "";
        price = 0;
        amount = 0;
        number = 0;

    }

    //конструктор с параметрами
    Goods(string s1, string s2, int p, int a, int n)
    {
        name = s1;
        date = s2;
        price = p;
        amount = a;
        number = n;
    }

    //получить название товара
    string GetName()
    {
        return name;
    }

    //задать название товара
    void SetName(string s)
    {
        name = s;
    }

    //получить дату оформления
    string GetDate()
    {
        return date;
    }

    //задать дату оформления
    void SetDate(string s)
    {
        date = s;
    }

    //получить цену товара
    int GetPrice()
    {
        return price;
    }

    //задать цену товара
    void SetPrice(int p)
    {
        price = p;
    }

    //получить количество товара
    int GetAmount()
    {
        return amount;
    }

    //задать количество товара
    void SetAmount(int a)
    {
        amount = a;
    }

    //получить номер накладной
    int GetNumber()
    {
        return number;
    }

    //задать номер накладной
    void SetNumber(int n)
    {
        number = n;
    }

    //получить цену товара в виде строки
    string ToStringPrice()
    {
        string s = "";
        int i;

        for (i = price; i > 9; i /= 10) s += to_string(i % 10);

        s += to_string(i);
        reverse(s.begin(), s.end());
        return s;
    }

    //получить общую стоимость
    int GetTotalCost()
    {
        return price * amount;
    }

    //получить стоимость заданного числа товара
    int GetCost(int n)
    {
        return price * n;
    }

    //количество товара увеличить на заданное число
    void AmountIncrease(int n)
    {
        amount += n;
    }

    //количество товара уменьшить на заданное число
    void AmountDecrease(int n)
    {
        amount -= n;
    }

};