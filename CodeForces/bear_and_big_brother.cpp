#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int years = 0;
    for (;;) {
        years++;
        a = a * 3;
        b = b * 2;
        if (a > b) {
            cout << years << endl;
            return 0;
        }
    }
    return 0;
}