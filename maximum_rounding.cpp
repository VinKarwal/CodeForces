#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    s = '0' + s;
    int k = s.size();
    for (int i = s.size() - 1; i > 0; i--) {
      if (s[i] >= '5') {
        s[i - 1]++;
        k = i;
      }
    }

    for (int i = (s[0] == '0'); i < s.size(); i++) {
      cout << (i >= k ? '0' : s[i]);
    }
    cout << endl;
  }
  return 0;
}
