// first and last occurences of an element in array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// pair<int, int> firstAndLast(vector<int>&arr, int n, int k){
//     int first = -1, last = -1;
//     for(int i=0; i<n; i++){
//         if(arr[i] == k){
//             if(first == -1) first = i;
//             last = i;
//         }
//     }
//     return {first, last};
// }
int upperBound(vector<int>&arr, int n, int k){
    int low=0, high=n-1;
    int ans = n;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>k){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int lowerBound(vector<int>&arr, int n, int k){
    int low=0, high=n-1;
    int ans = n;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=k){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
pair<int, int> firstAndLast(vector<int>&arr, int n, int k){
    int lb = lowerBound(arr, n, k);
    if(lb == n || arr[lb] != k) return {-1,-1};
    int ub = upperBound(arr, n, k);
    return {lb, ub-1};
}
int main()
{
    vector<int> arr = {2,4,6,8,8,8,11,13};
    int n=arr.size();
    int k = 8;
    pair<int, int> ans = firstAndLast(arr, n, k);
    cout<<"first and last positions are : "<<ans.first<<" "<<ans.second<<endl;
    return 0;
}