#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w;
    int tc = 0;
    cin >> k;
    cin >> n;
    cin >> w;
    for (int i = 1; i <= w; i++) {
        tc += (k * i);
    }
    if ((tc - n) <= 0) {
        cout << 0 << endl;
    } else {
        cout << (tc - n) << endl;
    }
}