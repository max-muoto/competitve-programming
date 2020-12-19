#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, x, y;
    int count = 0;
    cin >> n >> p;
    vector <int> nums = {};
    for (int i = 0; i < p; i ++) {
        cin >> x;
        cin >> y;
        nums.push_back(x);
        nums.push_back(y);
    }
    for (int i = 1; i <= n; i++) {
        for (int x = 0; i < nums.size(); x++) {
            if (i == nums[x]) {
                count++;
                break;
            }
        }
    }
    if (count == p) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}