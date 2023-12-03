#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int l = n%10;
    int sl = (n % 100) / 10;

    cout << max(max(n, n/10), max(n/10, n/10-sl+l));
    return 0;
}