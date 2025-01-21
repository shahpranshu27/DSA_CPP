// reverse of string using recursion
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(string s){
    if(s.size()==0){
        return;
    }
    reverse(s.substr(1));
    cout<<s[0];
}
int main()
{
    string a="pranshu shah";
    reverse(a);
}