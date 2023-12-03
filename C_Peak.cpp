#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    for (auto& i : a) {
        cin >> i;
    }

    sort(a, a + n);

    int ans = 0;
    int i = 0, j = 0;
    // while (i < n && j < n) {
    //     if (a[j] - a[i] < m) {
    //         ans = max(ans, j - i + 1);
    //         j++;
    //     }
    //     else {
    //         i++;
    //     }
    // }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[j] - a[i] < m) {
                ans = max(ans, j - i + 1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}