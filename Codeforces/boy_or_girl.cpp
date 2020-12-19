#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    string name;
    int counter = 0;
    std::map<char, int>  occurences;
    cin >> name;
    for (int i = 0; i < name.length(); i++) {
        if (occurences.find(name[i]) == occurences.end()) {
            occurences[name[i]] = 1;
        } else {
            occurences[name[i]]++;
        }
    }
    for (int x = 0; x < occurences.size(); x++) {
        counter++;
    }
    if (counter % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}