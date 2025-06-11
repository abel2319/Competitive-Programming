#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cin >> num;

    double result = 4*sqrt(num);

    printf("%.20f\n", result);
    return 0;
}
