#include <iostream>

int main() {
    char letter;
    int limit = 122;
    for(int i = 97; i <= limit; ++i){
        letter = i;
        std::cout << letter << " " << i << "\n";
        if(i == 122){
            limit-=32;
            i-=58;
        }
    }
}
