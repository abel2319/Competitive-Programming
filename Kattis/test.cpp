#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a 2D vector of size 3 with each inner vector of size 2 and default value 5
    vector<vector<int>> v(3, vector<int>(2, 5));
    for (auto i : v) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
