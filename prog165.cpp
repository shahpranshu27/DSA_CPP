// search element in rotated sorted array 2
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool search(vector<int>&arr, int k){
    int n = arr.size();
    // for(int i=0; i<n; i++){
    //     if(arr[i] == k){
    //         return true;
    //     }
    // }
    // return false;

    int low=0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == k){
            return true;
        }
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low=low+1;
            high=high-1;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {7,8,1,2,3,3,3,4,5,6};
    int k = 3;
    bool ans = search(arr, k);
    if(!ans) cout<<"target is not present"<<endl;
    else cout<<"target is present"<<endl;
    return 0;
}