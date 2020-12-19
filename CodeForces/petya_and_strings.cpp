#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string first;
    string second;
    cin >> first;
    cin >> second;
    for (int i = 0; i < first.length(); i++) {
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
    }
    if (first < second){
        cout << -1 << endl;
    } else if (second < first){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}