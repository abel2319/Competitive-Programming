#include <iostream>
#include <cmath>

int main() {
    int n;
    while (std::cin >> n) {
        int sum = 1; // 1 is always a proper divisor
        int sqrt_n = static_cast<int>(sqrt(n));
        
        // Calculate sum of proper divisors
        for (int i = 2; i <= sqrt_n; ++i) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) // Avoid adding the same divisor twice
                    sum += n / i;
            }
        }
        
        // Adjust if n is a perfect square
        if (sqrt_n * sqrt_n == n)
            sum -= sqrt_n;
        
        // Determine the classification
        if (sum == n)
            std::cout << sum << " perfect" << std::endl;
        else if (sum >= n - 2 && sum <= n + 2)
            std::cout << sum << " almost perfect" << std::endl;
        else
            std::cout << sum << " not perfect" << std::endl;
    }
    return 0;
}
