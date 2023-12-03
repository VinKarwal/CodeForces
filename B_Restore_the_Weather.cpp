#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, x;
    cin >> a >> x;
    int arr[2][a];

    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < a; j++) {
        cin >> arr[i][j];
      }
    }

    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        if (abs(arr[0][i] - arr[1][j]) <= x) swap(arr[1][j],arr[1][i]);
      }
    }

    for (int i = a - 1; i >= 0; i--)
    {
      for (int j = 0; j < a; j++) {
        if (abs(arr[0][i] - arr[1][j]) <= x) swap(*arr+i, *arr+j);
      }
    }
    for (int i = 0; i < a; i++) {
      cout << arr[1][a] << " ";
    }
    cout << endl;
  }
  return 0;
}