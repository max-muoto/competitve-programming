#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    string word;
    cin >> word;
    word[0] = toupper(word[0]);
    cout << word << endl;
    return 0;
}