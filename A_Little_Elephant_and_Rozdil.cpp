#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int arr[n], count = 0;
  int min = INT_MAX, index;
  for (int i = 0; i < n; i++) cin >> arr[i];

  for (int i = 0; i < n; i++) {
    if (min > arr[i]) min = arr[i], index = i+1;
    // cout << count << endl;
  }
  for (int i = 0; i < n; i++) {
    if (min == arr[i]) count++;
  }
  // cout << min << endl;
  count > 1 ? cout << "Still Rozdil" : cout << index;
  cout << endl; 
  return 0;
}