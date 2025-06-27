#include <iostream>
#include <cmath>


int main() {
    int n;
    double t; 
    std::cin >> n;
    
    t = std::log(n) / std::log(2);
    if (t - int(t) == 0)
	    std::cout << t + 1;
    else
    	std::cout<< int(t) + 2;
    return 0;
}
