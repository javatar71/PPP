#include <iostream>
#include <utility>

int main(){
    std::cout << "Enter three words: ";
    std::string a,b,c;
    std::cin >> a >> b >> c;
    bool is_sorted = false;
    while(!is_sorted){
        is_sorted = true;
        if(a > b){
            std::swap(a,b);
            is_sorted = false;
        }
        if(b > c){
            std::swap(b,c);
            is_sorted = false;
        }
    }
    std::cout << a << ", "<< b << ", " << c << "\n";
}
