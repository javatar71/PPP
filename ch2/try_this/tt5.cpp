#include <iostream>

int main()
{
    double d = 0;
    while (std::cin>>d) {
        int i = d;
        char c = i;
        std::cout << "double is " << d
        << " integer is "<< i
        << " char is " << c << "\n";
    }
}
