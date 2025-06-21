#include <iostream>
#include <vector>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count=0;
    std::cin >> n;
    
    std::vector<std::vector<int>> points (n, std::vector<int>(2));

    for (int i = 0; i < n; ++i) {
	std::cin >> points[i][0] >> points[i][1];
    }

    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < n; ++j) {
		if(j != i) {
			if(points[i][0] == points[j][0] ){
				for (int t = 0; t < n; ++t) {
					if (t!=i && t !=j && points[i][1] == points[t][1]) {
						++count;
					}
				}
			}
		}
	}
    }

	std::cout << count;
    return 0;
}
