#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool isPossible(int N){
    if(isPrime(N) && isPrime(N-2)){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    if(isPossible(n))
        cout<<"yes";
    else
        cout<<"no";
}