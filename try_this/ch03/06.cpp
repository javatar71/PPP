#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> black_list = {"test", "text", "cout"};
    for(std::string word; std::cin >> word;){
        for(int i = 0; i < black_list.size(); ++i){
            if(word == black_list[i]){
                word = "BLEEP";
            }
        }
        std::cout << word << "\n";
    }
}
