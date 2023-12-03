#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    int arr[x], count=0, max=0;
    for (int i = 0; i < x; i++) {
      cin >> arr[i];
    }

    for (int i = 1; i < x; i++) {
      if(arr[i]>=arr[i-1]) count ++;
      else count = 0;

      if(count > max) max = count;
    }

    cout << max+1;
    return 0;
}