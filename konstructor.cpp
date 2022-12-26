#include <iostream>
using namespace std;
class vect
{
    int size;
    int* array;
public:
    vect(int size)
    {
        this->size = size;
        array = new int[size];
        for (int i = 0; i < size; i++)
            array[i] = 0;
    }
    int& element(int i) { return array[i]; }
    int getSize() { return size; }
};
class multi_v
{
public:
    vect a;
    vect b;
    vect c;
    multi_v(int size) : a(size), b(size), c(size) { }
    int getSize() { return a.getSize(); }
};
int main()
{
    system("chcp 1251");
    system("cls");
    multi_v f(3);
    for (int i = 0; i <= f.getSize(); i++)
    {
        f.a.element(i) = 10 + i;
        f.b.element(i) = 20 + 5 * i;
        f.c.element(i) = 120 + 5 * i;
    }
    for (int i = 0; i <= f.getSize(); i++)
    {
        cout << f.a.element(i) << "лет \t";
        cout << f.b.element(i) << "кг \t";
        cout << f.c.element(i) << "см" << endl;
    }
    cin.get();
    return 0;
}