#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    
    long long remainder = A % B;
    long long coins = min(remainder, B - remainder);
    
    cout << coins << endl;
    
    return 0;
}
