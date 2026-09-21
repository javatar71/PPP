#include <iostream>

int main(){
    std::cout << "Enter two integer numbers: ";
    int val1, val2;
    std::cin >> val1 >> val2;
    int larger = val1;
    int smaller = val2;
    if(val1 < val2){
        larger = val2;
        smaller = val1;
    }
    std::cout << "For numbers " << val1 << " and " << val2 <<
    "\nLarger is " << larger << " and smaller is " << smaller
    << "\nSum is " << val1+val2
    << "\nDifference is " <<  larger-smaller
    << "\nProduct is " << val1*val2
    << "\nRatio is " << larger/smaller
    << "\n";
}
