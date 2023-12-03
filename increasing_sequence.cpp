#include <iostream>
using namespace std;

int main(){
    int n, d;
    
    cin >> n >> d;

    int size = n;
    int *b = new int[size];
    int counter = 0;
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    for(int i=1; i<n; i++) {
        if(b[i-1] >= b[i]){
            int diff = b[i-1] - b[i];
            int c = (diff+d)/d;
            b[i] += c*d;
            counter += c;
        }
    }

    delete[] b;
    cout << counter;
    return 0;
}