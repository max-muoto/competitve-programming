#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n, k, a;
    int counter = 0;
    std::vector<int> places = {};
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> a;
        places.push_back(a);
    }
    for (int x = 0; x < places.size(); x++){
        if ((places[x] >= places[k - 1]) && (places[x] > 0)){
            counter += 1;
        }
    }
    cout << counter << endl;
    return 0;
}