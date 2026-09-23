#include <iostream>

int main() {
    int start = 1;
    int end = 100;
    int index = end/2;
    char above;
    while(end - start > 0){
        std::cout << "Your number is above " << index << "? (input y or n): ";
        std::cin >> above;
        switch(above){
            case 'y':
                start = index + 1;
                break;
            case 'n':
                end = index;
                break;
        }
        index = (end + start)/2;
    }
    std::cout << "Your number is " << (end+start)/2 << "\n";
}
