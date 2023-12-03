#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

    set<int> s(a, a + n);

    cout << (s.size() < 3 ? n / 2 + 1 : n) << endl;
  }
}