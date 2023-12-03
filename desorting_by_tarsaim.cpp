#include<iostream>
#define INT_MAX       2147483647
using namespace std;
int main(){
    int a[500];
    int diff,min=INT_MAX,index=0,count=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        diff=a[i+1]-a[i];
        if(diff<min){
            min=diff;
            index=i;
        }
    }
    if(a[index+1]>a[index]){
        while(a[index+1]>a[index]){
            count++;
        }
    }
    else{
        while(a[index]>a[index+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}