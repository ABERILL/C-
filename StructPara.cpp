#include "StructPara.h"
#include <iostream>

void init(Para p)
{
	p.first = 0;
	p.second = 0;
}

void read(Para p)
{
	std::cout << "first = ";
	std::cin >> p.first;
	std::cout << "second = ";
	std::cin >> p.second;
}

void display(Para p)
{
	std::cout << "first = " << p.first << '\n';
	std::cout << "second = " << p.second;
}

int nod(Para p)
{
	return 0;
}
