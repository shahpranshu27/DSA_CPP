// largest element in the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0; i<n; i++){
        // cout<<arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}