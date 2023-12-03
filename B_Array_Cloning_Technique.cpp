#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    if (n == 1) {
      cout << 0 << endl;
    }
    else {
      int freq = 1, count = 0;
      sort(arr, arr + n);
      int tmp = 1;
      for (int i = 1; i < n; i++) {
        if (arr[i - 1] == arr[i]) {
          tmp++;
        }
        else {
          tmp = 1;
        }
        freq = max(freq, tmp);
      }
      int temp = n - freq;
      if (temp == 0) cout << 0 << endl;
      else {

        while (freq < n) {
          count++;
          freq *= 2;
        }
        cout << count + temp << endl;
      }
    }
  }
}