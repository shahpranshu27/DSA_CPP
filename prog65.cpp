#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b;
    cin>>op;
    cin>>a>>b;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    default:
        cout<<"enter correct operator"<<endl;
        break;
    }
}