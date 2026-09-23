#include <iostream>

double power(int dig, int pow){
    double sum = 1;
    for(int i = 1; i <= pow; i++){
        sum*=dig;
    }
    return sum;
}



int main() {
    int sum = 1;
    double sum_d = 1;
    double tmp_d, cur_sq_d;
    int cur_sq, tmp;
    int acc = 0;
    int squares = 1;
    for(squares; squares <= 63; ++squares){
        cur_sq = power(2,squares);
        cur_sq_d = power(2,squares);
        tmp = sum;
        tmp_d = sum_d;
        sum+= cur_sq;
        sum_d+= cur_sq_d;
        if(sum < 0 && acc < 1){
            std::cout << tmp << " grains can handle int\n";
            ++acc;
        }
    }
    std::cout << squares << " squares can handle double for " << sum_d << " grains\n";
}
