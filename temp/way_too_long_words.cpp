#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  string temp;
  string modified_temp = "";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp.size() > 10){
      modified_temp = "";
      modified_temp += temp[0];
      modified_temp += to_string(temp.size() - 2);
      modified_temp += temp[temp.size() - 1];
      cout << modified_temp << endl;
    } else {
      cout << temp << endl; 
    }
  }
  return 0;
}