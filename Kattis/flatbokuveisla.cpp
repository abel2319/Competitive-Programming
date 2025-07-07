#include <iostream>

int main() {
    int n, m;
    
    std::cin >> n;
    std::getchar();
    std::cin >> m;
    
    std::cout << n - m * (n / m);
    return 0;
}
