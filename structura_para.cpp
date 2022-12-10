#6
#include <iostream>

class Product
{
private:
    unsigned int first;
    double second;
public:
    Product(int m_first, int m_second) : first(m_first), second(m_second) {}

    friend std::ostream& operator <<(std::ostream&, Product&);
};

std::ostream& operator <<(std::ostream& os, Product& a)
{
    float sum{ a.second * 10 * a.first };
    return os << sum;
}

int main()
{
    unsigned int first;
    int second;
    std::cout << "kilokalorii: ";
    std::cin >> first;
    std::cout << "Massa: ";
    std::cin >> second;
    Product newproduct(first, second);
    std::cout << newproduct;
    return 0;
}