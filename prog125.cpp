// linear search
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        if(x == arr[i]){
            cout<<arr[i]<<"is present at"<<i<<" index";
            break;
        }
    }
    // return -1;
    cout<<"-1";
}