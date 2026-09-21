#include <iostream>

int main(){
    std::cout << "Enter distance in miles, to convert into kilometers: ";
    double dist;
    std::cin >> dist;
    std::cout << dist <<" miles is " << dist*1.609 << " kilometes.\n";
    return 0;
}
