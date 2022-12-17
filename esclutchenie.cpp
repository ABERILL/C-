#include <iostream>
#include <cmath>
#include <vector>




using namespace std;

int main()
{
    int a, b;
    cout << "Значение 1 вектора" << endl;
    cin >> a;
    cout << "Значение 2 вектора" << endl;
    cin >> b;

    vector <int> v_1(a);
    vector <int> v_2;
    v_2.reserve(b);

    int sum = a + b;

    if (sum > 9 && sum < 100)
        std::cout << "Сумма элементов является двухзначным значением";
    else
        std::cout << "Сумма элементов не является двухнзначным числом";

}

