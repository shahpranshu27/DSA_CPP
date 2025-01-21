// sort array in wave form
// arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]....

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sortWave(int arr[], int n){
    for(int i=0; i<n; i+=2){
        // if current element is smaller than previous element
        if(i>0 && arr[i-1] > arr[i]){ 
            swap(&arr[i], &arr[i-1]);
        }
        // if current element is smaller than next element
        if(i<n-1 && arr[i] < arr[i + 1]){
            swap(&arr[i], &arr[i+1]);
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortWave(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}