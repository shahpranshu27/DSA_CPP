// left shift array by 1 place
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];
    cout<<temp<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        arr[i] = arr[i+1];
        if(i==n-1){
            arr[i] = temp;
        }
    }
    cout<<endl;
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}