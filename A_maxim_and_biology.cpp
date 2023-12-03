#include <bits/stdc++.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <valarray>
using namespace std;
int main() {
  int n, ans = INT_MAX, sum;
  string s, t = "ACTG";
  cin >> n >> s;
  for (int i = 0; i < n - 3; i++) {
    int k = i;
    sum = 0;
    for (int j = 0; j < 4; j++) {
      int diff = abs(s[k++] - t[j]);
      sum += min(diff, 26 - diff);
    }
    if (ans > sum) ans = sum;
  }

  cout << ans << endl;
  return 0;
}
