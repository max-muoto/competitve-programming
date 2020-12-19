#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    int count = 0;
    map<char, int> chars = {};
    cin >> n;
    for (int i = 0; i < n.size(); i++) {
        if (isalpha(n[i])) {
            if (chars.contains(n[i])) {
                chars[n[i]]++;
            } else {
                chars[n[i]] = 0;
            }
        }
    }
    for (auto const& [key, val] : chars) {
        if (val == 0) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}