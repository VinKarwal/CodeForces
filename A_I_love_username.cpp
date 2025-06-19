#include <bits/stdc++.h>
using namespace std;

int main() {
    int mx = 0, mn = 0, count = 0, n;
    int a;
    cin >> n >> a;
    mn = mx = a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a > mx) mx = a, count++;
        else if (a < mn) mn = a, count++;
    }
    cout << count;
    return 0;
}
