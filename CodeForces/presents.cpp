#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int i;
    std::vector<int> nums = {};
    cin >> n;
    for (int x = 1; x <= n; x++) {
        cin >> i;
        nums.push_back(i); 
    }
    for (int i = 1; i <= n; i++) {
        for (int y = 0; y < nums.size(); y++) {
            if (i == nums[y]) {
                cout << y + 1 << endl;
            }
        }
    }
    return 0;
}