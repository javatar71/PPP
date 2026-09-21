#include <iostream>
#include <cmath>

int main(){ // simple program to exercise operators
    std::cout << "Please enter an integer value: ";
    int n = 0;
    std::cin >> n;
    std::cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << std::sqrt(n)
    << "\nmodulo n of 2  == " << n % 2
    << '\n';
}
