#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, ans = "";
  cin >> s;
  string num[10];
  for (int i = 0; i < 10; i++) {
    cin >> num[i];
  }

  for (int i = 10; i <= 80; i += 10) {
    for (int j = 0; j < 10; j++) {
      if (s.substr(i - 10, 10) == num[j]) {
        cout << j;
      }
    }
  }
  cout << endl;

  return 0;
}
