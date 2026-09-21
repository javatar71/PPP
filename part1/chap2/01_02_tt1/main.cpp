#include <iostream>

int main(){
    // read name and age
    std::cout << "Please enter your ﬁrst name and age\n";
    std::string ﬁrst_name = "???";
    // string variable ("???" indicates "don’t know the name")
    double age = -1.0;
    // integer variable (-1 means "don’t know the age")
    std::cin >> ﬁrst_name >> age;
    age = age*12;
    // read a string followed by an integer
    std::cout << "Hello, " << ﬁrst_name << " (age " << age << " months)\n";
}
