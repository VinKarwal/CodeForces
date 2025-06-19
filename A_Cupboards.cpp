#include <bits/stdc++.h>
using namespace std;

int main() {
    int l0 = 0; int l1 = 0;
    int r0 = 0; int r1 = 0;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        a ? l1++ : l0++;
        b ? r1++ : r0++;

    }
    cout << min(l0, l1) + min(r0, r1);
    return 0;
}