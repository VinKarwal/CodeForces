#include <bits/stdc++.h>

#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str, ans;
  cin >> str;
  int n = str.length();
  str += " ";

  for (int i = 0; i < n; i++) {
    if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
      ans += ' ';
      i += 2;
    } else {
      ans += str[i];
    }
  }
  cout << ans << endl;
  return 0;
}
