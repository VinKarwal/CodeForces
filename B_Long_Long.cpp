#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;

    long long int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    long long int sum = 0;
    for (int i = 0; i < n; i++) sum += abs(a[i]);

    int count = 0, side = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] < 0 && side == 0)
        side = 1, count++;
      else if (a[i] > 0)
        side = 0;
    }

    cout << sum << " " << count << endl;
  }
  return 0;
}