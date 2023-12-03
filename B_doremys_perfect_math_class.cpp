#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  int a[100009], ans; 
  cin >> n >> a[0];
  ans = a[0];
  for (int i = 1; i < n; i++){
    cin >> a[i];
    ans = __gcd(ans, a[i]);
  }

  cout << a[n-1]/ans << endl;
}

int main() {
  int t; cin >> t;
  
  while (t--) {
    solve();
  }

  return 0;
}