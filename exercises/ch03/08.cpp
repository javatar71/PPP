#include <iostream>
#include <vector>

std::vector<std::string> num_list = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int str_to_int(std::string str){
    for(int i = 0; i < num_list.size(); ++i){
        if(num_list[i] == str) return i;
    }
    return -1;
}

int get_val(){
    std::string str;
    int num;
    if(std::cin >> num){
        if(std::cin && (num < 10 && num >= 0)){
            return num;
        }
        else return -1;
    }
    std::cin.clear();
    std::cin >> str;
    return str_to_int(str);
}


int main(){

    char oper;
    std::string oper_str;

    double val1, val2, ans;
    std::cout << "Enter two values(0-9) or spelled numbers and operator, e.g. 1 2 +; one two -\n";

    val1 = get_val();

    val2 = get_val();

    if (val1 == -1 || val2 == -1 ) return 1;

    std::cin >> oper;

    switch(oper){
        case '+':
            ans = val1 + val2;
            oper_str = "sum";
            break;
        case '-':
            ans = val1 - val2;
            oper_str = "difference";
            break;
        case '*':
            ans = val1 * val2;
            oper_str = "product";
            break;
        case '/':
            if(val2 == 0){
                std::cout << "Illegal operation\n";
                return 1;
            }
            ans = val1 / val2;
            oper_str = "quotient";
            break;
        default:
            std::cout << "Unknown operation\n";
            return 1;
    }
    std::cout << "The " << oper_str << " of " << val1 << " and " << val2 << " is " << ans << "\n";
}
