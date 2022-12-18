#include <iostream>
using namespace std;
class TMun {
public:
    TMun(float x, float y) :first(x), second(y) {}
    ~TMun() {};
    TMun* Read();
    void Display();
    float Distance();
private:
    float first;
    float second;
};
TMun* TMun::Read() {
    float x, y;
    cout << "Input x: ";
    cin >> x;
    if (!cin) {
        cout << "\nInput error!" << endl;
        cin.clear();
        return NULL;
    }
    cout << "Input y: ";
    cin >> y;
    if (!cin) {
        cout << "\nInput error!" << endl;
        cin.clear();
        return NULL;
    }
    first = x;
    second = y;
    return this;
}
void TMun::Display() {
    cout << "\tfirst: " << first << "\tsecond: " << second << endl;
}
float TMun::Distance() {
    return sqrt(first * first + second * second);
}
TMun* Make_Mun() {
    float x, y;
    cout << "Input x: ";
    cin >> x;
    if (!cin) {
        cout << "\nInput error!" << endl;
        cin.clear();
        return NULL;
    }
    cout << "Input y: ";
    cin >> y;
    if (!cin) {
        cout << "\nInput error!" << endl;
        cin.clear();
        return NULL;
    }
    TMun* mun = new TMun(x, y);
    return mun;
}

int main()
{
    TMun* m;
    if (m = Make_Mun()) { // Создаем
        m->Display();
    }
    if (m->Read()) { // Читаем новые координаты
        m->Display();
    }
    if (m) { // Выводим дистанцию
        cout << "\nDistance: " << m->Distance() << endl;
    }
    system("Pause");
    return 0;
}
