#include <iostream>

int main(){
    std::cout << "Please enter your ﬁrst name and age\n";
    std::string ﬁrst_name;
    double age = 0;
    std::cin >> ﬁrst_name >> age;
    age = age*12;
    std::cout << "Hello, " << ﬁrst_name << " your age is " << age << " in months\n";
}
