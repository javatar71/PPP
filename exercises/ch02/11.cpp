#include <iostream>

int main(){
    int p, n, d, q, hd, od;
    double sum;
    std::cout << "Enter how much pennies do you have?\n";
    std::cin >> p;
    std::cout << "Enter how much nickels do you have?\n";
    std::cin >> n;
    std::cout << "Enter how much dimes do you have?\n";
    std::cin >> d;
    std::cout << "Enter how much quarters do you have?\n";
    std::cin >> q;
    std::cout << "Enter how much half dollars do you have?\n";
    std::cin >> hd;
    std::cout << "Enter how much one-dollar coins do you have?\n";
    std::cin >> od;
    sum = p+n*5+d*10+q*25+hd*50+od*100;
    if(p!=0){
        std::cout << "You have " << p << " pennie";
        if(p != 1){
            std::cout << "s\n";
        } else {
            std::cout << "\n";
        }
    }
    if(n!=0){
        std::cout << "You have " << n << " nickel";
        if(n != 1){
            std::cout << "s\n";
        } else {
            std::cout << "\n";
        }
    }
    if(d!=0){
        std::cout << "You have " << d << " dime";
        if(d != 1){
            std::cout << "s\n";
        } else {
            std::cout << "\n";
        }
    }
    if(q!=0){
        std::cout << "You have " << q << " quarter";
        if(q != 1){
            std::cout << "s\n";
        } else {
            std::cout << "\n";
        }
    }
    if(hd!=0){
        std::cout << "You have " << hd << " half-dollar";
        if(hd != 1){
            std::cout << "s\n";
        } else {
            std::cout << "\n";
        }
    }
    if(od!=0){
        std::cout << "You have " << od << " dollar";
        if(od != 1){
            std::cout << "s\n";
        } else {
            std::cout << "\n";
        }
    }
    std::cout << "The value of all of your coins is " << sum/100 << "\n";
}
