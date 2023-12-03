#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    cout << (b - a > 2 || a - b > 3 ? "No" : "Yes") << endl;
    return 0;
}