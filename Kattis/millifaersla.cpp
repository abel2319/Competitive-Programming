#include <iostream>


int main() {
    int a, t=1000000000, j=0;
    
    for (int i = 1; i <=3; i++) {
        std::cin >> a;
        if (a <= t) {
            t=a;
            j=i;
        }
    }
    
    std::cout<< (j == 1 ? "Monnei" : (j == 2 ? "Fjee" : "Dolladollabilljoll"));
    
    return 0;
}