#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    cin >> t;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[t.size() - 1 - i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}