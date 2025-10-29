#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int x, y, n;
    std::cin>>x>>y>>n;
    
    for (int i = 1; i <= n; ++i) {
        if (i % x == 0 && i % y == 0)
            std::cout<<"FizzBuzz";
        else if (i % y == 0)
            std::cout <<"Buzz";
        else if (i % x == 0)
            std::cout<<"Fizz";
        else
            std::cout <<i;
            
        if (i != n)
            std::cout<<std::endl;
    }
    return 0;
}