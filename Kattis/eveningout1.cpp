#include <iostream>

int main() {
    long long int A, B;
    
    std::cin >> A >> B;
    
    if (A > B)
        std::cout << B - (A % B);
    else
        std::cout << B - A;
    return 0;
}
