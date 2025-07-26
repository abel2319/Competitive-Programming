#include <iostream>
#include <string>

int main () {
    std::string s;
    
    std::cin >> s;
    
    size_t pos = s.find("kth");
    
    std::cout<< (pos != std::string::npos ? "yes" : "no");

    return 0;
}