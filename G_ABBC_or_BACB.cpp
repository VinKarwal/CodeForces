#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    if (s.find('B') != string::npos) {
      int i = 0, count = 0;
      while ((i = s.find('A', i)) != string::npos) count++, i++;
      cout << count << endl;
    } else
      cout << 0 << endl;
  }
  return 0;
}