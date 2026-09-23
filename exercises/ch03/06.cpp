#include <iostream>

int main(){
    char oper;
    std::string oper_str;
    double val1, val2, ans;
    std::cout << "Enter two values and operator, e.g. 25 34 +\n";
    std::cin >> val1 >> val2 >> oper;
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
