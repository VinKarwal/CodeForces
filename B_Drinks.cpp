#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  float x, sum = 0;
  for (int i = 0; i < t; i++) {
    cin >> x;
    sum += x;
  }
  double ans = sum / t;
  cout << setprecision(12) << ans;
  return 0;
}