#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    string n;
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            counter++;
        }
    }
    if (counter == 4 || counter == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}