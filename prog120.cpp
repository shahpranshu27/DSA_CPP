// check if array is sorted
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1]){
            cout<<"true";
            break;
        }
        else{
            cout<<"false";
            break;
        }
    }
    return 0;
}