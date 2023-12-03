#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int g = gcd(n1, n2);
    cout << g;
    return 0;
}