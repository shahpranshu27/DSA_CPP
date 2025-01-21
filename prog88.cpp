// rearrange the array in such a way, that even positioned elements are greater then odd positioned

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void assign(int a[], int n){
    sort(a,a+n);
    int ans[n];
    int p=0,q=n-1;
    for(int i=0;i<n;i++){
        if((i+1)%2==0){
            ans[i] = a[q--];
        }
        else{
            ans[i] = a[p++];
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    assign(a,n);
    return 0;
}