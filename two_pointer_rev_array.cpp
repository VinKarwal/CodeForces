//Reversing an array using recursion
#include <iostream>
using namespace std;
#define n 5
int rev(int a[], int i){

    if(i>= n/2) return 0;
    swap(a[i], a[n-i-1]);
    rev(a, i+1);
}
int main(){
    int a[n] = {1,2,3,79,234};

    rev(a, 0);

    for(int i=0; i<5; i++)
        cout << a[i] << " ";

    return 0;
}