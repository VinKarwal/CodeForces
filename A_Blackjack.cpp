#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; cin >> a;
    if(a <= 10 || a > 21) cout << 0;
    else if(a == 20) cout << 15;
    else cout << 4;
    return 0;
}