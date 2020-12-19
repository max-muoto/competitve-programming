#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    int x = 0;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if ((a[0] == '+') || (a[a.length() - 1] == '+')) {
            x += 1;
        } else {
            x -= 1;
        } 
    }       
    cout << x;
    return 0;
}