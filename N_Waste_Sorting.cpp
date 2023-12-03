#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a[3], b[5];
    for (int i = 0; i < 3; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
      cin >> b[i];
    }
    ll sum_a = 0;
    ll sum_b = 0;
    for (int i = 0; i < 3; i++) {
      sum_a += a[i];
    }
    for (int i = 0; i < 5; i++) {
      sum_b += b[i];
    }
    if (a[0] + a[2] >= b[0] + b[2] + b[3] && a[1] + a[2] >= b[1] + b[2] + b[4] && sum_a >= sum_b && a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2]) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}