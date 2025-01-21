// search elements in a rotated sorted array 1
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int search(vector<int>&arr, int n, int k){
    // for(int i=0; i<n; i++){
    //     if(arr[i] == k){
    //         return i;
    //     }
    // }
    // return -1;

    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        // if mid points the target
        if(arr[mid] == k) return mid;

        // if left part is sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k<= arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // if right part is sorted
        else{
            if(arr[mid] <= k && k<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int n=arr.size();
    int k = 1;
    int ans = search(arr, n, k);
    if(ans == -1) cout<<"target is not present"<<endl;
    else cout<<"target is present at : "<<ans<<endl;
    return 0;
}