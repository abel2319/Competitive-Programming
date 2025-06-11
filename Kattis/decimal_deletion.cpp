#include<iostream>

int main() {
    float num;
    
    std::cin >> num;
    std::cout << static_cast<int>(num + 0.5f);
    return 0;
}
