#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <iomanip>


float average(std::vector<int> const& v){
    if(v.empty()){
        return 0;
    }

    auto const count = static_cast<float>(v.size());
    return std::reduce(v.begin(), v.end()) / count;
}

int main() {
	int c, n;

	std::cin >> c;
	for (int i = 0; i < c; ++i) {
		std::cin >> n;
		std::vector<int> grades(n);
		for (int j = 0; j < n; ++j)
			std::cin >> grades[j];
		float mean = average(grades);
		int count = std::count_if(grades.begin(), grades.end(), [mean](int num) { return num > mean; });
		std::cout << std::fixed << std::setprecision(3) << double(count) * 100 / n << "%" <<std::endl;
	}

	return 0;
}
