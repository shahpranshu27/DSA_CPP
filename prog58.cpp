#include<iostream>
using namespace std;
int fact(int n){
    // int n;
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"factorial of "<<n<<"is : "<<fact(n)<<endl;
}