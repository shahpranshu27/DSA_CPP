// insertion sort
// takes the element, and places it in it's correct position
// takes an element, and swaps it to leftwards, until it can't be swapped. and that's how it gets arranged in sorted order
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}