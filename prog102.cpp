// sum of first n numbers using recursion
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// void f(int i, int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     f(i-1, sum+i);
// }
int sum(int n){
    if( n == 0 ){
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    // f(n, 0);
    cout<<sum(n);
    return 0;
}