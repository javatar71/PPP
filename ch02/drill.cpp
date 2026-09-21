#include <iostream>

int main(){
    std::cout << "Enter the name of the person you want to write to\n";
    std::string name = "???";
    std::cin >> name;
    std::string friend_name = "???";
    std::cout << "Enter name of another friend\n";
    std::cin >> friend_name;
    int age = -1;
    std::cout << "Enter recepient age\n";
    std::cin >> age;
    std::string my_name = "???";
    std::cout << "Enter your name\n";
    std::cin >> my_name;

    std::cout << "\nDear " << name << ","
    << "\nHow are you? I am ﬁne. I miss you.";
    std::cout << "\nHave you seen " << friend_name << " lately?";
    if((age > 0) && (age < 110)){
        std::cout << "\nI hear you just had a birthday and you are " << age << " years old.";
        if (age < 12){
            std::cout << "\nNext year you will be " << age +1 << ".";
        }
        if (age == 17){
            std::cout << "\nNext year you will be able to vote.";
        }
        if (age > 70){
            std::cout << "\nAre you retired?";
        }
    } else {
        std::cout << "\nYou are kidding!";
        return 1;
    }
    std::cout << "\n\n\nYours sincerely, " << my_name << "\n";
}
