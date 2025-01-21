#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    isPrime(10)?cout<<"true \n":cout<<"false\n";
    isPrime(11)?cout<<"true \n":cout<<"false\n";
}