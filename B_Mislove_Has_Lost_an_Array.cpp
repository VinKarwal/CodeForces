#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, l, r; cin >> n >> l >> r;
  int m = pow(2, l - 1);
  int mn = pow(2, r - 1);
  int sum1 = m, sum2 = mn * (n - (r - 1)), count = 0;
  while (m) {
    sum1 += m / 2;
    m /= 2;
    count++;
  }
  sum1 += (n - count);
  while (mn) {
    sum2 += mn / 2;
    mn /= 2;
  }
  cout << sum1 << " " << sum2 << endl;
  return 0;
}