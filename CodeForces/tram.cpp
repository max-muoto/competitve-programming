#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    int n, a, b;
    int min = 0;
    std::vector<int> mins = {};
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        cin >> b;
        min += b;
        min -= a;
        mins.push_back(min);
    }
    sort(mins.begin(), mins.end());
    cout << mins[mins.size() - 1] << endl;
    return 0;
}