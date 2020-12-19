#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    string s;
    string final = "";
    cin >> s;
    std::vector<int> nums = {};
    for (int i = 0; i < s.length(); i+=2)
        nums.push_back(s[i] - '0');
    sort(nums.begin(), nums.end());
    for (int x = 0; x < ceil(s.length() / 2.0); x++) {
        if (x != (ceil(s.length() / 2.0)) - 1) {
            final += std::to_string(nums[x]);
            final += "+";
        } else {
            final += std::to_string(nums[x]);
        }
    }
    cout << final << endl;
    return 0;
}