// upper bound
// arr[i] > x
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int upper(vector<int>&arr, int k){
    int n = arr.size();
    // for(int i=0; i<n; i++){
    //     if(arr[i] > k){
    //         return i;
    //     }
    // }
    // return n;

    int low = 0, high = n-1;
    int ans = n;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > k){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3,5,8,9,15,19};
    int k = 9;
    cout<<upper(arr, k)<<endl;
    return 0;
}