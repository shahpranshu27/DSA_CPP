#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int max(int arr[],int n){
    // int min=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // for(int i=1;i<n;i++){
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    // }
    return max;
}
int min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[]={3,5,2,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"max : "<<max(arr,n);
    cout<<"min : "<<min(arr,n);
    // cout<<"max : "<<min;
}