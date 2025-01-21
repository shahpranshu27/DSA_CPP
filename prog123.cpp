// rotate array by k places, either left or right
// logic for left rotate : take k elements from beginning and store them in tempArr. Then, from k to n elements, shift them to 0 to k indices (i-k). then attach the tempArr elements at the end of main arr, from n-k to n indices
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    // cin>>"enter k : ";
    int tempArr[k];
    // for left rotate
    // for(int i=0; i<k; i++){
    //     tempArr[i] = arr[i];
    // }
    // for(int i=k; i<n; i++){
    //     arr[i-k] = arr[i];
    // }
    // for(int i=n-k; i<n; i++){
    //     arr[i] = tempArr[i-(n-k)];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // for right rotate
    

    return 0;
}