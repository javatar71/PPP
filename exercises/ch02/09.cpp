#include <iostream>

int main(){
    std::cout << "Enter digit as word: ";
    std::string word;
    std::cin >> word;
    int val;
    if(word == "zero") {val = 0;}
    else if(word == "one") {val = 1;}
    else if(word == "two") {val = 2;}
    else if(word == "three") {val = 3;}
    else if(word == "four") {val = 4;}
    else val = -1;
    if(val == -1){
        std::cout << "I dont't know this number\n";
    } else {
        std::cout << val << "\n";
    }

}
