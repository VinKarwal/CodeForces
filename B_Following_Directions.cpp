#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int x = 0, y = 0, flag = 0;
        for (int i = 0; i < n; i++) {
            switch (s[i]) {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
            }
            if (x == 1 && y == 1) {
                flag = 1;
                break;
            }
        }
        cout << (flag == 1 ? "YES" : "NO") << endl;
    }
}