#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n; cin >> n;
    while ((n / 100) * ((n / 10) % 10) != (n % 10)) {
        n++;
    }
    cout << n << endl;
    return 0;
}