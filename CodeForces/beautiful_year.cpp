#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
    int y;
    cin >> y;
    for (int i = y; i++;) {
        string z = to_string(i);1
        int counter = 0;
        std::map<char, int> occurences = {};
        for (int x = 0; x < z.size(); x++) {
            if (occurences[z[x]] > 1) {
                counter++;
            } else {
                occurences[z[x]]++;
            }
            if (counter == 0 && x == z.size() - 1) {
                cout << z << endl;
                return 0;
        }
    }
}
    return 0;
}