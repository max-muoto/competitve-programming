#include <bits/stdc++.h>
using namespace std;
int main() {
    string n, s;
    cin >> n;
    cin >> s;
    string f = "";
    for (int i = 0; i < n.size(); i++) {
        if (n[i] != s[i]) {
            f += '1';
        } else {
            f += '0';
        }
    }
    cout << f << endl;
    return 0;
}