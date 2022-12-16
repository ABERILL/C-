#include <iostream>     
#include <algorithm>    

bool IsOdd(int i) { return ((i % 2) == 0); }

int main() {
    int myints[] = { 1,2,3,4,5,6,7,8,9 };

    // bounds of range:
    int* pbegin = myints;
    int* pend = myints + sizeof(myints) / sizeof(int);

    pend = std::remove_if(pbegin, pend, IsOdd);

    std::cout << "the range contains:";
    for (int* p = pbegin; p != pend; ++p)
        std::cout << ' ' << *p;
    std::cout << '\n';

    return 0;
}