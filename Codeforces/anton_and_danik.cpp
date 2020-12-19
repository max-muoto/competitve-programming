#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    int n;
    int d = 0;
    int a = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int  i = 0; i < n; i++) {
        if (s[i] == 'A'){
            a++;
        }
        else {
            d++;
        }
    }
    if (a == d) {
        cout << "Friendship" << endl;
    } else if (a > d){
        cout << "Anton" << endl;
    } else {
        cout << "Danik" << endl;
    }
    return 0;
}