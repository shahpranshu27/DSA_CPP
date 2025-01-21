// bubble sort using recursion
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    if(n==1) return;
    int didSwap = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            didSwap = 1;
        }
    }
    if(didSwap==0) return;
    bubble_sort(arr, n-1);
}
int main()
{
    int arr[] = {2,4,3,6,1,5};
    int n=sizeof(arr)/ sizeof(arr[0]);
    cout<<"before"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr, n);
    cout<<"after"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}