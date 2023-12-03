#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n; cin >> n;
    ll a[n], b[n];
    for (auto& i : a) {
      cin >> i;
    }
    for (auto& i : b) {
      cin >> i;
    }
    ll ans1 = 0, ans2 = 0;
    ll min_a = *min_element(a, a + n);
    ll min_b = *min_element(b, b + n);
    for (int i = 0; i < n; i++) {
      ans1 += a[i] + min_b;
      ans2 += b[i] + min_a;
    }
    cout << min(ans1, ans2) << endl;
  }
}