#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> tokens;
    std::string s = str;  // make a non-const copy
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        tokens.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s);
    return tokens;
}


int main() {
    std::string s;
    std::cin >> s;
    
    std::vector<std::string> splt = split(s, "-");
    
    for (auto o : splt){
        std::cout<< o[0];
    }
    
    return 0;
}
