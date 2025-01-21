// bubble sort
// it pushes max element from array to the last, by adjacent swapping, just opposite to that of the selection sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1], arr[j]); // we just swap the adjacent elements, if the element at j > j+1, then we swap
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout<<"runs"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubble_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}