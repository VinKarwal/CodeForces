#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, total;
  cin >> n >> total;
  int arr[n - 1];
  for (int i = 0; i < n - 1; i++) cin >> arr[i];
  int sum = 0;
  sort(arr, arr + n - 1);
  if (n == 3) {
    cout << total - arr[0] << endl;
  } else {
    for (int i = 1; i < n - 2; i++) sum += arr[i];
    total - sum > 100
        ? cout << -1 << endl
        : (total - sum < 0 ? cout << 0 << endl : cout << total - sum << endl);
  }
  return 0;
}
