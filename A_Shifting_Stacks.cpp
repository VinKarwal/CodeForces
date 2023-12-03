#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
          cin >> arr[i];
        }
        int diff = 0;
        for (int i = 1; i < n; i++) {
          diff += abs(arr[i] - arr[i-1]);
        }

        is_sorted(arr, arr+n) || diff <= 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}