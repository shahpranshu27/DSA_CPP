#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void primeRange(int l,int h){
    int flag;
    for(int i=l;i<=h;i++){
        if(i==0 || i==1){
            continue;
        }
        flag=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
}
int main()
{
    int l,h;
    cin>>l>>h;
    primeRange(l,h);
}