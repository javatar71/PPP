#include <iostream>
#include <vector>
#include <algorithm>

bool odd(int num){
    if(num%2 == 0){
        return false;
    } else {
        return true;
    }
}

double median(std::vector<double> sequence){
    std::ranges::sort(sequence);
    int size = sequence.size();
    if (odd(size)){
        return sequence[size/2];
    }
    else {
        return (sequence[(size-1)/2] + sequence[(size/2)]) / 2;
    }
}

int main()
{
    std::vector<double> temps;
    for (double temp; std::cin>>temp; )
        temps.push_back(temp);
    double sum = 0;
    for (double x : temps)
        sum += x;
    std::cout << "Average temperature: " << sum/temps.size() << '\n';

    std::cout << "Median temperature: " << median(temps) << '\n';
}
