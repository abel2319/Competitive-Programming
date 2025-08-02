#include <iostream>

int main() {
 int n, w, h, m;
 
 std::cin >> n >> w >> h;
 
 for (int i = 0; i < n; ++i) {
    std::cin >> m;
    if (m * m <= (w*w + h*h))
        std::cout << "DA" << std::endl;
    else
        std::cout << "NE" << std::endl;
 }

 return 0;   
}
