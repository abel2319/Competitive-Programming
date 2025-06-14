#include <bits/stdc++.h>
using namespace std;

int minOperations(int a, int b) {
    queue<pair<int, int>> q; // {number, steps}
    unordered_set<int> visited;
    
    q.push({a, 0});
    visited.insert(a);
    
    while (!q.empty()) {
        int curr = q.front().first;
        int steps = q.front().second;
        q.pop();
        
        if (curr == b) {
            return steps;
        }
        
        // Add 1
        int next1 = curr + 1;
        if (next1 <= 1000000000 && visited.find(next1) == visited.end()) {
            q.push({next1, steps + 1});
            visited.insert(next1);
        }
        
        // Divide by 2 if even
        if (curr % 2 == 0) {
            int next2 = curr / 2;
            if (next2 >= 1 && visited.find(next2) == visited.end()) {
                q.push({next2, steps + 1});
                visited.insert(next2);
            }
        }
    }
    
    return -1; // Should never reach here given constraints
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << minOperations(a, b) << endl;
    return 0;
}
