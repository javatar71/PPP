#include <iostream>

int guesser(int val){
    int start = 1;
    int end = 100;
    int index = end/2;
    char above;
    while(end - start > 0){
        //std::cout << "Your number is above " << index << "? (input y or n): ";
        // test start
        if(val > index) {
            above = 'y';
        } else {
            above = 'n';
        }

        // test end
        //std::cin >> above;
        switch(above){
            case 'y':
                start = index + 1;
                break;
            case 'n':
                end = index;
                break;
        }
        index = (end + start)/2;
    }
    //std::cout << "Your number is " << (end+start)/2 << "\n";
    return (end+start)/2;
}


int main(){
    for(int i = 1; i <= 100; ++i){
        if(i != guesser(i)){
            std::cout << "number :" << i << " result:" << guesser(i) << " assert: " << (i == guesser(i)) <<"\n";
            return 1;
        }
    }
    std::cout << "All tests passed\n";
}
