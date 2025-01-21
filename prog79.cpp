#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void f(int cnt){
    if(cnt==4){
        return;
    }
    cout<<cnt;
    // cnt++;
    f(cnt+1);
}
int main()
{
    f(0);
}
