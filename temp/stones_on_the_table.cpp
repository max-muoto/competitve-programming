#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    int counter = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            counter += 1;
        }
    }
    cout << counter << endl;
    return 0;
}