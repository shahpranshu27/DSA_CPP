// search insert position
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int searchInsert(vector<int>&arr, int x){
    int n = arr.size();
    int low=0, high=n-1;
    int ans = n;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>=x){
            ans = mid;
            // look for smaller index on left
            high = mid-1;
        }
        else{
            // look on right
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,2,4,7};
    int x = 6;
    cout<<"index is : "<<searchInsert(arr, x)<<endl;
    return 0;
}