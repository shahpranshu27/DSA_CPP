// lower bound
// the lower bound algo finds first or the smallest index in sorted array where the value at that index is greater than or equal to a given key
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// int lowerBound(vector<int>&arr, int n, int k){
//     for(int i=0; i<n; i++){
//         if(arr[i] >= k){
//             return i;
//         }
//     }
//     return n;
// }
int lowerBound(vector<int>&arr, int n, int k){
    int low = 0, high = n-1;
    int ans = n;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= k){
            ans = mid;
            high = mid-1; // look for smaller index on left
        }
        else{
            low = mid+1; // look on right
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {3,5,8,15,19};
    int n = arr.size();
    int k = 9;
    cout<<"lower bound is at index : "<<lowerBound(arr, n, k)<<endl;
    return 0;
}