// find out how many times the array has been rotated
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findRotation(vector<int>&arr){
    int n = arr.size();
    // int ans = INT_MAX, index = -1;
    // for(int i=0; i<n; i++){
    //     if(arr[i]<ans){
    //         ans = arr[i];
    //         index = i;
    //     }
    // }
    // return index;

    int low = 0, high = n-1;
    int ans = INT_MAX;
    int index = -1;

    while(low<=high){
        int mid = (low+high)/2;
        // search space is already sorted then arr[low] will always be the min in that search space :
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index = low;
                ans = arr[low];
            }
            break;
        }
        // if left part is sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                index = low;
                ans = arr[low];
            }
            low = mid+1;
        }
        // if right part is sorted
        else{
            // keep the minimum
            if(arr[mid]<ans){
                index = mid;
                ans = arr[mid];
            }
            high = mid-1;
        }
    }
    return index;
}
int main()
{
    vector<int> arr = {4,5,6,7,0,1,2,3};
    int ans = findRotation(arr);
    cout<<"the array is rotated : "<<ans<<" times";
    return 0;
}