#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll A, B, n;
    cin >> A >> B >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    bool flag = false;
    for (int i = 0; i < n; i++) {
      B -= (b[i] + A - 1) / A * a[i];
    }
    for (int i = 0; i < n; i++)
      if (B > -a[i]) flag = true;

    flag ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}