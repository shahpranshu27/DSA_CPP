// compliment of number with base 10
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int m=n;
    cin>>m;
    int mask=0;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    int ans=(~n) & mask;
    cout<<ans;
    return ans;
}