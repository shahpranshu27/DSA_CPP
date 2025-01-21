// find peak element in an array
// peak leement : element greater than both it's neighbours i.e. arr[i-1]<arr[i] and arr[i+1] < arr[i]
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int peak(vector<int>&arr){
    int n = arr.size();

    // for(int i=0; i<n; i++){
    //     if((i==0 || arr[i]>arr[i-1]) && (i==n-1 || arr[i]>arr[i+1])) return i;
    // }
    // return -1;

    // using binary search
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;

    int low = 1, high = n-2;
    while(low<=high){
        int mid = (low+high)/2;
        // if arr[mid] is the peak element
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        // if we are in the left
        if(arr[mid]>arr[mid-1]) low = mid+1;
        // if we are in the right, or arr[mid] is a common point
        else high = mid-1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,5,1};
    int ans = peak(arr);
    cout<<"Peak element is at index : "<<ans;
    return 0;
}