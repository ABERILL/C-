


#include <iostream>
#include <windows.h>
using namespace std;
struct Cursor
{
	int first;
	int second;
};
void Init(Cursor& dest, const Cursor& val)
{
	dest.first = val.first;
	dest.second = val.second;
}
void Read(Cursor& p)
{
	cout << "Input point:" << endl;
	cin >> p.first >> p.second;
}
void Display(const Cursor& p)
{
	cout << "(" << p.first << "; " << p.second << ")" << endl;
}
int main(int argc, char* argv[])
{
	Cursor p1, p2 = { 1, 15 }, p3, p4;
	Init(p1, p2);
	Display(p1);
	Read(p3);
	Display(p3);
	std::cin >> sizeof(p4);
	system("pause");
	return 0;
}
