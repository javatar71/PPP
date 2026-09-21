#include <iostream>

int main(){
    std::cout << "Input operation, operand A and operand B divided by whitespace: ";
    std::string op;
    double a, b, ans;
    std::cin >> op >> a >> b;
    if(op == "add" || op == "+"){
        ans = a + b;
    } else if(op == "sub" || op == "-"){
        ans = a - b;
    } else if(op == "mul" || op == "*"){
        ans = a * b;
    } else if((op == "div" || op == "/") && b != 0){
        ans = a / b;
    } else {
        std::cout << "Operation unknown\n";
        return 1;
    }
    std::cout << a << " " << op << " " << b << " = " << ans << "\n";
}
