#include <iostream>

int main() {
    int n, j, sum = 0;
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> j;
        sum += j;
    }
    std::cout << sum;
    return 0;
}