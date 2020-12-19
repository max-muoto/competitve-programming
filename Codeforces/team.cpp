#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    int temp, temp1, temp2;
    int counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> temp1;
        cin >> temp2;
        if (temp + temp1 + temp2 >= 2) {
            counter += 1;
        }
    }
    cout << counter << endl;
    return 0;
}