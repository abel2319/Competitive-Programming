#include <iostream>

int main() {
	int a, b;

	std::cin >> a >> b;

	if(a <= b) {
		std::cout << b - a;
	}
	else {
		int t = 0;
		if (a % 2 == 1) {
			++t;
			++a;
		}

		if (b * 2 >= a) {
			std::cout << t + (b - a / 2) + 1; 
		}
		else {
			while (b <= a) {
				a /= 2;
				++t;
				if (a % 2 == 1 && b <= a){
					++a;
					++t;
				}
			}
			if (a < b) {
				std::cout << t + (b - a);
			}
		}
	}

	return 0;
}
