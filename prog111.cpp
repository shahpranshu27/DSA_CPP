// selection sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
        // int temp = arr[mini];
        // arr[mini] = arr[i];
        // arr[i] = temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selection_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// selects the min element from the array, and swaps it at front index, then the 0th index is secured, so will move forward to remaining 1 to n-1 elements, and from that array, it chooses the min element and swaps with 1st index, then moves forward and so on