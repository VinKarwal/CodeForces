// whenever there is a need to find the max/min of anything, try going for
// binary search algo.

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
  int s = 0, e = n - 1, mid;
  while (s <= e) {
    mid = (s + e) / 2;
    if (arr[mid] == key)
      return mid;
    else if (arr[mid] > key)
      e = mid - 1;
    else
      s = mid + 1;
  }
  return -1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, units;
    cin >> n >> units;
    long long int sum = 0, h;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (n == 1) {
      h = arr[0] + units;
    } else {
      sort(arr, arr + n);
      h = BinarySearch(arr, n, units);
    }
    cout << h << endl;
  }
  return 0;
}