#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int d, m;
    cin >> d >> m;


    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 
                               31, 31, 30, 31, 30, 31};

    vector<string> weekDays = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

    
    int totalDays = d - 1; 
    for (int i = 0; i < m - 1; ++i) {
        totalDays += daysInMonth[i];
    }


    cout << weekDays[totalDays % 7] << endl;

    return 0;
}
