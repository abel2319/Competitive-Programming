#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    unordered_map<int, int> x_counts;
    unordered_map<int, int> y_counts;
    vector<pair<int, int>> points;

    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
        x_counts[x]++;
        y_counts[y]++;
    }

    long long total = 0;
    for (const auto& point : points) {
        int x = point.first;
        int y = point.second;
        int cnt_x = x_counts[x] - 1;  // number of other points with same x
        int cnt_y = y_counts[y] - 1;  // number of other points with same y
        total += static_cast<long long>(cnt_x) * cnt_y;
    }

    cout << total;

    return 0;
}