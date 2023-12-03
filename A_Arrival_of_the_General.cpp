#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n], max, min;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    if(*max_element(arr, arr+n) == arr[i]) {
      max = i;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if(*min_element(arr,arr+n) == arr[i]) min = i;
  }
  // cout << min << endl << max << endl;
  min > max ? cout << max + n-min -1: cout << max + n-min -2 ;
  cout << endl;
  return 0;
}
