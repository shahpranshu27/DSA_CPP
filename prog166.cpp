// minimum in rotated sorted array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findMin(vector<int>&arr){
    int n = arr.size();
    // int mini = INT_MAX;
    // for(int i=0; i<n; i++){
    //     mini = min(mini, arr[i]);
    // }
    // return mini;

    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        // if left part is sorted
        if(arr[low]<=arr[mid]){
            // keep the minimum
            ans = min(ans, arr[low]);
            // eliminate the left half
            low = mid+1;
        }
        // if right part is sorted
        else{
            // keep the minimum
            ans = min(ans, arr[mid]);
            // eliminate the rright half
            high = mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {4,5,6,7,0,1,2,3};
    int ans = findMin(arr);
    cout<<"the minimum element is : "<<ans;
    return 0;
}