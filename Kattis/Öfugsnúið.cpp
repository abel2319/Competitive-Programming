#include <iostream>
#include <vector>

int main() {
	int n, input;
	std::vector<int> vec;

	std::cin >> n;
	
	for (int i = 0; i < n; ++i) {
		std::cin >> input;
		vec.push_back(input);
	}

	for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
		std::cout << *it;
		if (it != vec.rend() - 1)
			std::cout << std::endl;
    	}

	return 0;
}
