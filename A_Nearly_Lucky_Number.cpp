#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int c = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '7' || s[i] == '4') c++;
  }

  c == 4 || c == 7 ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}