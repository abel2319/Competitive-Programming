#include<iostream>
#include<cstdio>

int main(){
	int a, b;

	std::cin >> a;
	getchar();
	std::cin >> b;

	std::cout << (a > b ? "MAGA!" : (a == b ? "WORLD WAR 3!" : "FAKE NEWS!"));
	
	return 0;
}
