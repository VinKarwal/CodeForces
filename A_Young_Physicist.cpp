#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    t = t*t;
    int s = 0;
    while (t--) {
        int a; cin >> a;
        s+=a;
    }
    cout << (s==0 ? "YES" : "NO");
    
    return 0;
}