#include <iostream>
#include <vector>
#include <algorithm>

double conv_meter(double value, std::string unit){
    if (unit == "cm") {
        return value*0.01;
    } else if (unit == "in"){
        return value*0.0254;
    } else if (unit == "ft"){
        return value*0.3048;
    }
    return value;
}


int main(){
    std::vector<double> number_list;
    double value, min, max, sum;
    std::string unit; // cm, m, in, ft
    while(std::cin >> value >> unit){
        if(unit == "m" || unit == "cm" || unit == "ft" || unit == "in"){
            value = conv_meter(value, unit);
            number_list.push_back(value);
            sum+=value;
            if(number_list.size() > 1) {
                if (value > max){
                    max = value;
                    std::cout << value << " meters is largest so far\n";
                }
                if (value < min){
                    min = value;
                    std::cout << value << " meters is smallest so far\n";
                }
            } else  {
                min = value;
                max = value;
                std::cout << value << " meters is largest ans smallest so far\n";
            }
        } else {
            std::cout << unit << " is illegal unit!\n";
        }

    }
    std::cout << "Sum of " << number_list.size() << " values is " << sum << " meters, largest is  " << max << " meters, smallest is " << min << " meters\n";
    std::ranges::sort(number_list);
    std::cout << "List of values: ";
    for(double val : number_list){
        std::cout << val << " ";
    }
    std::cout << "\n";
}
