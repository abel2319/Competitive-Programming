#include <iostream>
#include <string>

int main () {
	std::string s;
    
    std::cin >> s;
    
    int n = s.length();
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            std::cout << s.substr(i, n);
            break;
        }
    }
    return 0;
}
