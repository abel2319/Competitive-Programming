#include <iostream>

int main () {
    unsigned long long a, n, prod=1;
    
    std::cin >> n;
    
    for(int i = 0; i < n; ++i) {
        std::cin >> a;
        prod = prod * (a % 1000000007);
	prod %= 1000000007;
    }
    
    std::cout << prod;
    return 0;
}
