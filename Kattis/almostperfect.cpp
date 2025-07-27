#include <iostream>
#include <cmath>
int main() {
    int n, sum=1;
    
    while (std::cin >> n) {
        for (int i = 2; i <= std::sqrt(n); ++i) {
		std::cout<<i;
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
    		std::cout<<sum<<" perfect"<<std::endl;
        else if (sum == n - 2 || sum == n + 2)
            std::cout<<sum<<" almost perfect"<<std::endl;
        else
            std::cout<<sum<<" not perfect"<<std::endl;

	sum = 1;
    }
    return 0;
}
