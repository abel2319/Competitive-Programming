#include <iostream>

int main() {
	int a, b, c;

	std::cin >> a >> b >> c;

	if (a + b == c) {
		std::cout << a << "+" << b << "=" << c;
	}
	else if (a - b == c) {
		std::cout << a << "-" << b << "=" << c;
	}
	else if (a / b == c) {
		std::cout << a << "/" << b << "=" << c;
	}
	else if (a * b == c) {
		std::cout << a << "*" << b << "=" << c;
	}
	else if (a == b + c) {
		std::cout << a << "=" << b << "+" << c;
	}
	else if (a == b - c) {
		std::cout << a << "=" << b << "-" << c;
	}
	else if (a == b / c) {
		std::cout << a << "=" << b << "/" << c;
	}
	else {
		std::cout << a << "=" << b << "*" << c;
	}

	return 0;
}
