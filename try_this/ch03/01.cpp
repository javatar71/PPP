#include <iostream>

int main(){
    constexpr double yen = 0.0064;
    constexpr double kroner = 0.11;
    constexpr double pound = 1.33;

    std::cout << "Please, enter amount and currency followed by (y, k or p) ";

    double val;
    char cur;
    std::cin >> val >> cur;
    if (cur == 'y') {
        std::cout << val << " yen is " << val*yen << " dollars\n";
    } else if (cur == 'k') {
        std::cout << val << " kroner is " << val*kroner << " dollars\n";
    } else if (cur == 'p') {
        std::cout << val << " pounds is " << val*pound << " dollars\n";
    } else{
        std::cout << "Unknown currency\n";
        return 1;
    }
}
