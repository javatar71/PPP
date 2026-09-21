#include <iostream>

int main(){
    std::cout << "Enter integer value: ";
    int val;
    std::cin >> val;
    std::cout << val << " is ";
    if((val % 2) == 0){
        std::cout << " even\n";
    } else {
        std::cout << " odd\n";
    }

}
