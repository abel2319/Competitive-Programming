#include <iostream>

int main() {
    int n, t, v;
    
    std::cin >> n >> t >> v;
    
    std::cout << 4 * (t > n/2 ? t : n-t) * (v > n/2 ? v : n-v); 
    return 0;
}
