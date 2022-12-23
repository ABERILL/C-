#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>


using namespace std;

class Money {
    int one;         // 1 rub
    int two;         // 2 rub
    int five;        //  5 rub
    int ten;          //  10 rub
    int fifty;        //  50 rub
    int hundread;       //  100 rub
    int FiveHundread;    // 500 rub
    int OneThousand;    //   1000 rub
    int FiveThousand;    //  5000 rub
    double OneKopeck;    //    1 kop
    double FiveKopeck;    //    5 kop
    double TenKopeck;     //    10 kop
    double FiftyKopeck;   //    50 kop
    double summ;
public:
    bool init(int o, int twoo, int f, int t, int ffy, int h, int FH, int OThs, int FThs, double OK, double FK, double TK, double FfyK)
    {
        if ((o < 0) || (twoo < 0) || (five < 0) || (ten < 0) || (fifty < 0) || (hundread < 0) || (FiveHundread < 0) || (OneThousand < 0) || (FiveThousand < 0) || (OneKopeck < 0) || (FiveKopeck < 0) || (TenKopeck < 0) || (FiftyKopeck < 0))
        {
            cout << "Аргументы должны быть больше 0!\n";
            return 1; 
        }

        else                
        {
            one = o;
            two = twoo;
            five = f;
            ten = t;
            fifty = ffy;
            hundread = h;
            FiveHundread = FH;
            OneThousand = OThs;
            FiveThousand = FThs;
            OneKopeck = OK;
            FiveKopeck = FK;
            TenKopeck = TK;
            FiftyKopeck = FfyK;
            return 0;
        }
    }
    double TotalSumm()
    {
        summ = one * 1 + two * 2 + five * 5 + ten * 10 + fifty * 50 + hundread * 100 + FiveHundread * 500 + OneThousand * 1000 + FiveThousand * 5000 + OneKopeck / 100 + FiveKopeck * 5 / 100 + TenKopeck * 10 / 100 + FiftyKopeck * 50 / 100;
        return 0;
    }
    void read();
    void display();
    void add(Money&);
    void sub(Money&);


};
void Money::read()
{
    int one, two, five, ten, fifty, hundread, FiveHundread, OneThousand, FiveThousand;
    double OneKopeck, FiveKopeck, TenKopeck, FiftyKopeck;
    do
    {
        cout << "-rub-" << endl;
        cout << "Vvedite kolvo deneg 1 rub: "; cin >> one;
        cout << "Vvedite kolvo deneg 2 rub: "; cin >> two;
        cout << "Vvedite kolvo deneg 5 rub: "; cin >> five;
        cout << "Vvedite kolvo deneg 10 rub: "; cin >> ten;
        cout << "Vvedite kolvo deneg 50 rub: "; cin >> fifty;
        cout << "Vvedite kolvo deneg 100 rub: "; cin >> hundread;
        cout << "Vvedite kolvo deneg 500 rub: "; cin >> FiveHundread;
        cout << "Vvedite kolvo deneg 1000 rub: "; cin >> OneThousand;
        cout << "Vvedite kolvo deneg 5000 rub: "; cin >> FiveThousand;
        cout << "-kop-" << endl;
        cout << "Vvedite kolvo kop 1 rub: "; cin >> OneKopeck;
        cout << "Vvedite kolvo kop 5 rub: "; cin >> FiveKopeck;
        cout << "Vvedite kolvo kop 10 rub: "; cin >> TenKopeck;
        cout << "Vvedite kolvo kop 50 rub: "; cin >> FiftyKopeck;
    } while (init(one, two, five, ten, fifty, hundread, FiveHundread, OneThousand, FiveThousand, OneKopeck, FiveKopeck, TenKopeck, FiftyKopeck) == 1);


}
void Money::add(Money& a)
{
    one = one + a.one;
    two = two + a.two;
    five = five + a.five;
    ten = ten + a.ten;
    fifty = fifty + a.fifty;
    hundread = hundread + a.hundread;
    FiveHundread = FiveHundread + a.FiveHundread;
    OneThousand = OneThousand + a.OneThousand;
    FiveThousand = FiveThousand + a.FiveThousand;
    OneKopeck = OneKopeck + a.OneKopeck;
    FiveKopeck = FiveKopeck + a.FiveKopeck;
    TenKopeck = TenKopeck + a.TenKopeck;
    FiftyKopeck = FiftyKopeck + a.FiftyKopeck;
}
void Money::sub(Money& b)
{
    one = one - b.one;
    two = two - b.two;
    five = five - b.five;
    ten = ten - b.ten;
    fifty = fifty - b.fifty;
    hundread = hundread - b.hundread;
    FiveHundread = FiveHundread - b.FiveHundread;
    OneThousand = OneThousand - b.OneThousand;
    FiveThousand = FiveThousand - b.FiveThousand;
    OneKopeck = OneKopeck - b.OneKopeck;
    FiveKopeck = FiveKopeck - b.FiveKopeck;
    TenKopeck = TenKopeck - b.TenKopeck;
    FiftyKopeck = FiftyKopeck - b.FiftyKopeck;
}
void Money::display()
{
    cout << "---------------------------" << endl;
    cout << "Summa: " << summ << endl;
    cout << "---------------------------" << endl;
    cout << "Sum deneg 1 rub: " << one << endl;
    cout << "Sum deneg 2 rub: " << two * 2 << endl;
    cout << "Sum deneg 5 rub: " << five * 5 << endl;
    cout << "Sum deneg 10 rub: " << ten * 10 << endl;
    cout << "Sum deneg 50 rub: " << fifty * 50 << endl;
    cout << "Sum deneg 100 rub: " << hundread * 100 << endl;
    cout << "Sum deneg 500 rub: " << FiveHundread * 500 << endl;
    cout << "Sum deneg 1000 rub: " << OneThousand * 1000 << endl;
    cout << "Sum deneg 5000 rub: " << FiveThousand * 5000 << endl;
    cout << "Sum kop 1 rub: " << OneKopeck / 100 << endl;
    cout << "Sum kop 5 rub: " << FiveKopeck * 5 / 100 << endl;
    cout << "Sum kop 10 rub: " << TenKopeck * 10 / 100 << endl;
    cout << "Sum kop 50 rub: " << FiftyKopeck * 50 / 100 << endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Money a, b;
    cout << "Vvod № 1: " << endl;
    a.read();
    a.TotalSumm();
    cout << "-" << endl;
    cout << "Vvod № 2: " << endl;
    b.read();
    b.TotalSumm();
    cout << "-" << endl;
    cout << "Vuvod sum: " << endl;
    a.display();
    b.display();
    cout << "-" << endl;
    cout << "Slochenie sum: " << endl;
    a.add(b);
    a.TotalSumm();
    cout << "-" << endl;
    cout << "Itog: " << endl;
    a.display();
    cout << "Vuchitanie: " << endl;
    a.sub(b);
    a.TotalSumm();
    cout << "-" << endl;
    cout << "Itog: " << endl;
    a.display();
    system("pause");
    return 0;
}