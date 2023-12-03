#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
  map<string, int> mp;

  for (int i = 0; i < m; i++) {
    string s; cin >> s;
    mp[s]++;
  }

  sort(a, a + n);
  int b[mp.size()], i = 0;

  for (auto&& e : mp) {
    b[i++] = e.second;
  }

  sort(b, b + mp.size());
  int sum_n = 0, sum_m = 0;

  for (int i = 0; i < mp.size(); i++) {
    sum_n += b[mp.size() - 1 - i] * a[i];
    sum_m += b[mp.size() - 1 - i] * a[n - 1 - i];
  }

  cout << sum_n << " " << sum_m << endl;

  return 0;
}