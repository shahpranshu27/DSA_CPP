// sort elements from 1 to n

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void sort(int arr[], int n){
    int i;
    while(i<n){
        // find correct index
        int correct = arr[i]-1;
        // element index and value not match, then swap
        if(arr[correct]!=arr[i]){
            swap(arr[i],arr[correct]);
        }
        else{
            i++;
        }
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int arr[]  = {1,5,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}