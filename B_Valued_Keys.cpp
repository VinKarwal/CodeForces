#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  string a, b; cin >> a >> b;
  int flag = 1;
  for (int i = 0; i < a.length(); i++) {
    if (b[i] > a[i]) {
      flag = 0;
    }
  }
  if (flag) {
    for (int i = 0; i < a.length(); i++) {
      if (a[i] == b[i])
        cout << 'z';
      else
        cout << b[i];
    }
    cout << endl;
  }
  else {
    cout << -1 << endl;
  }

  return 0;
}