#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b >= a)
      cout << b;
    else if (c - d <= 0)
      cout << -1;
    else {
      long long int m = (a - b + c - d - 1) / (c - d);
      cout << b + (m * c);
    }
    cout << endl;
  }
  return 0;
}
