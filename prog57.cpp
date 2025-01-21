#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b and a>c){
        cout<<"a is greatest"<<endl;
    }
    else if (b>a and b>c)
    {
        cout<<"b is greatest"<<endl;
    }
    else if (c>a and c>b)
    {
        cout<<"c is greatest"<<endl;
    }
}