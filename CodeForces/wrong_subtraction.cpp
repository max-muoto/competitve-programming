#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    cin >> k;
    string temp;
    int sub_val = n;
    for (int i = 1; i <= k; i++) {
        if (to_string(sub_val).back() != '0') {
            sub_val -= 1;
        } else {
            temp = to_string(sub_val);
            temp.pop_back();
            sub_val = stoi(temp);
        }
    }
    cout << sub_val << endl;
    return 0;
}