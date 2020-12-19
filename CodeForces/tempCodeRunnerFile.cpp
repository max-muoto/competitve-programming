#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a;
    int count = 0;
    vector<int> heights = {};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        heights.push_back(a);
    }
    int max_val = *max_element(heights.begin(), heights.end());
    int min_val = *min_element(heights.begin(), heights.end());
    int max_index;
    int min_index;
    for (int x = 0; x < heights.size(); x++) {
        if (max_val == heights[x]) {
            max_index = x + 1;
        }
        if (min_val == heights[x]) {
            min_index = x + 1;
        }
    }
    if (heights[0] == max_val && heights[heights.size() - 1] == min_val) {
        cout << 0 << endl;
        return 0;
    }

    if (min_index < max_index) {
        count = (max_index - 1) +  (heights.size() - 1 - min_index);
    } else {
        count = (max_index - 1) +  (heights.size() - min_index);
    }
    cout << count << endl;
    return 0;
}