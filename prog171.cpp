// nth root of a number using binary search
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// long long func(int b, int exp){
//     // long long ans = 1;
//     // long long base = b;
//     // while(exp>0){
//     //     if(exp%2){ // if exp is odd
//     //         exp--;
//     //         ans = ans*base;
//     //     }
//     //     else{ // if exp is even
//     //         exp/=2;
//     //         base = base*base;
//     //     }
//     // }
//     // return ans;
// }
// optimal approach : binary search
int func(int mid, int n, int m){
    // return 1, if ==m
    // return 0, if <m
    // return 2, if >m
    long long ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans*mid;
        if(ans>m) return 2;
    }
    if(ans==m) return 1;
    return 0;
}
int NthRoot(int n, int m){
    // for(int i=1; i<=m; i++){
    //     long long val = func(i,n);
    //     if(val == m*1ll) return i;
    //     else if(val>m*1ll) break;
    // }
    // return -1;

    // optimal approach : binary search
    int low=1, high=m;
    while(low<=high){
        int mid = (low+high)/2;
        int midN = func(mid, n, m);
        if(midN == 1) return mid;
        else if(midN==0) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
    // int n=3, m=27;
    int n=3, m=64;
    int ans = NthRoot(n,m);
    cout<<"The answer is : "<<ans;
    return 0;
}