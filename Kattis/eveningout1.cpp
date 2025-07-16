#include <iostream>

int main() {
    long long int A, B;
    
    std::cin >> A >> B;
    
    std::cout << B - (A % B);
    return 0;
}
