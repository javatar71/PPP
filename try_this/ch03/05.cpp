#include <iostream>

int square(int val){
    int ans = 0;
    for(int i = val; i > 0; --i){
        ans+=val;
    }
    return ans;
}

int main() {
        for (int i = 0; i<100; ++i)
            std::cout << square(i) << "\n";
}
