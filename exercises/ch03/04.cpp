#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    std::vector<double> num_list;
    double sum = 0;
    for(double val; std::cin >> val;){
        num_list.push_back(val);
        sum+=val;
    }
    std::ranges::sort(num_list);
    std::cout << "Min. distance: " << num_list[0]
    << ", max. distance:  " << num_list[num_list.size()-1]
    << ", distance sum is: " << sum
    << ", mean distance is: " << sum/num_list.size()
    << "\n";
}
