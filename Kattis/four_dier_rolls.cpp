#include <iostream>
#include <vector>
#include <set>
#include <cmath>

bool allUnique(const std::vector<int>& v) {
	std::set<int> s(v.begin(), v.end());
	return s.size() == v.size();
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main(){
	int n;
	std::cin >> n;

	std::vector<int> rolls(n);

	for (int i = 0; i < n; ++i) {
		std::cin >> rolls[i];
	}

	if(allUnique(rolls)) {
		int a = factorial(6 - n) / 2;
		std::cout << a << " " << std::pow(6, 4 - n) - a; 
	}
	else {
		std::cout << 0 << " " << std::pow(6, 4 - n);
	}

	return 0;
}
