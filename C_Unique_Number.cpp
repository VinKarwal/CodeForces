#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x; cin >> x;
        // int a[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        if (x < 10) {
            cout << x << endl;
        }
        else if (x > 45) {
            cout << -1 << endl;
        }
        else {
            int a = 9;
            while (x > a) {
                x -= a;
                a--;
            }
            cout << x;
            while (a < 9) {
                a++;
                cout << a;
            }
            cout << endl;
        }
    }
}