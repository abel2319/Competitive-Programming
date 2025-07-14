#include <iostream>

int main () {
    int m;
    
    std::cin >> m;
    if (m > 8) {
        if (m % 2 == 1)
            std::cout << 30;
        else
            std::cout << 31;
    } else if (m % 2 == 1) {
        std::cout << 31;
    } else if (m % 2 == 0) {
        if (m==2)
            std::cout << 28;
        else if (m==8)
            std::cout << 31;
        else
            std::cout << 30;
    }
    return 0;
}