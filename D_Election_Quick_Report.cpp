#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[n] = { 0 }, max = 0;
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    a[x - 1]++;
    // cout << max_element(a, a + n) - a + 1 << endl;
    if (a[x - 1] > a[max] || (a[x - 1] == a[max] && x - 1 < max)) {
      max = x - 1;
    }
    cout << max + 1 << endl;
  }
  return 0;
}