#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int arr[n * k];
    for (int i = 0; i < n * k; i++) {
      cin >> arr[i];
    }
    ll sum = 0;
    int tmp = k, skip = (n / 2) + 1;
    while (tmp--) {
      sum += arr[n * k - skip];
      skip += (n / 2) + 1;
    }

    cout << sum << endl;
  }
}