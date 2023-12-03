#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s; cin >> s;
    int turn = 0;
    while (!s.empty()) {
      if (s.find("01") != string::npos || s.find("10") != string::npos) {
        s.erase(min(s.find("01"), s.find("10")), 2);
        turn++;
      }
      else {
        break;
      }
    }
    cout << (turn % 2 == 0 ? "NET" : "DA") << endl;
  }
}