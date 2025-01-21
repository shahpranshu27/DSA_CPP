#include<iostream>
using namespace std;
int main()
{
    int a,b,max_num,flag;
    cin>>a>>b;
    max_num=(a-b)?a:b;
    while(flag){
        if(max_num%a==0 and max_num%b==0){
            cout<<"lcm of "<<a<<" and "<<b<<" is : "<<max_num;
            break;
        }
        ++max_num;
    }
}