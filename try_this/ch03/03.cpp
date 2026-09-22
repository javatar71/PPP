#include <iostream>

int main() {
    char letter = 'a';
    int index;
    while(letter <= 'z' ){
        index = letter;
        std::cout << letter << " " << index << "\n";
        ++letter;
    }
}
