#include <iostream>
#include <cmath>

int power(int dig, int pow){
    int sum = 1;
    for(int i = 1; i <= pow; i++){
        sum*=dig;
    }
    return sum;
}

int main() {
    int sum = 1;
    int acc = 0;
    for(int i = 1; i <= 64; ++i){
        sum+= power(2,i);
        if(sum >= 1000 && acc < 1){
            std::cout << "For 1000 grains there's " << i << " squares\n";
            ++acc;
        }
        if(sum >= 1000000 && acc < 2){
            std::cout << "For 1000000 grains there's " << i << " squares\n";
            ++acc;
        }
        if(sum >= 1000000000 && acc < 3){
            std::cout << "For 1000000000 grains there's " << i << " squares\n";
            ++acc;
        }
    }
}
