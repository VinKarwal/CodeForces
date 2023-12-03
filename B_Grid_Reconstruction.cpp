#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a = 2 * n;
        int b = 2;
        for (int i = 0; i < n / 2; i++) {
            cout << a << " ";
            a -= 2;
            cout << b << " ";
            b += 2;
        }
        cout << endl;
        a = 1;
        b = n + 1;
        for (int i = 0; i < n / 2; i++) {
            cout << a << " ";
            a += 2;
            cout << b << " ";
            b += 2;
        }
        cout << endl;
    }
}