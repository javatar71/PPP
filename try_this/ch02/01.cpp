#include <iostream>

int main(){
    std::cout << "Please enter your ﬁrst name and age\n";
    std::string first_name;
    double age = 0;
    std::cin >> first_name >> age;
    age = age*12;
    std::cout << "Hello, " << first_name << " your age is " << age << " in months\n";
}
