#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int val;
    for (int row = 1; row <= 5; row++) {
        for (int column = 1; column <= 5; column++){
            cin >> val;
            if (val == 1) {
                cout << abs(row - 3) + abs(column -3) << endl;
                return 0;
            }
        }
    }
    return 0;
}