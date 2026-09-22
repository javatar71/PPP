#include <iostream>

int main() {
    constexpr double yen = 0.0064;
    constexpr double kroner = 0.11;
    constexpr double pound = 1.33;
    constexpr double franc = 1.22;

    std::cout << "Please, enter amount and currency followed by (y, k, p or f) ";

    double val;
    char cur;
    std::cin >> val >> cur;

    switch(cur){
        case 'y':
            std::cout << val << " yen is " << val*yen << " dollars\n";
            break;
        case 'k':
            std::cout << val << " kroner is " << val*kroner << " dollars\n";
            break;
        case 'p':
            std::cout << val << " pounds is " << val*pound << " dollars\n";
            break;
        case 'f':
            std::cout << val << " swiss francs is " << val*franc << " dollars\n";
            break;
        default:
            std::cout << "Unknown currency\n";
    }
}
