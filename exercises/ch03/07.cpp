#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> num_list = {"zero", "one", "two", "three", "four", "five", "six", "seven"};
    int num;
    std::string str_num;
    while(std::cin){
        std::cin >> num;
        if(std::cin && (num < 8 && num >= 0)){
            std::cout << num_list[num] << "\n";
        } else if (!std::cin) {
            std::cin.clear();
            if(std::cin >> str_num){
                for(int i = 0; i < num_list.size(); ++i){
                    if(str_num == num_list[i]){
                        std::cout << i << "\n";
                        break;
                    }
                    if(i == (num_list.size() - 1) ) std::cout << "Numbers and words should be in range from 0 to 7\n";
                }
            }
        } else {
            std::cout << "Numbers and words should be in range from 0 to 7\n";
        }
    }
}
