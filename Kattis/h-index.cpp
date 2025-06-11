#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateHIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end(), greater<int>());
    
    int h_index = 0;
    int current_citations, papers_count, h;

    for (int i = 0; i < citations.size(); i++) {
        current_citations = citations[i];
        papers_count = i + 1;
        
        h = min(current_citations, papers_count);
        h_index = max(h_index, h);
    }
    
    return h_index;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> citations(n);
    for (int i = 0; i < n; i++) {
        cin >> citations[i];
    }
    
    int result = calculateHIndex(citations);
    cout << result << endl;
    
    return 0;
}
