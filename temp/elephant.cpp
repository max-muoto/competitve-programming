#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    int x;
    cin >> x;
    int counter = 0;
    for (int i = 0; i < x;) {
        if ((x - i) >= 5 ){
            i += 5;
            counter++;
        } else if ((x - i) == 4) {
            i += 4;
            counter++;
        } else if ((x - i) == 3) {
            i += 3;
            counter ++;
        } else if ((x - i) == 2) {
            i += 2;
            counter++;
        } else if ((x - i) == 1) {
            i++;
            counter++;;
        }
    }
    cout << counter << endl;
    return 0;
}