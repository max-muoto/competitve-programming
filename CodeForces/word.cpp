#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    string s;
    cin >> s;
    int upcounter = 0;
    int lowcounter = 0;
    for(int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            upcounter++;
        } else {
            lowcounter++;
        }
    }
    if (lowcounter >= upcounter) {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout << s << endl;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
        cout << s << endl;
    }
    return 0;
}