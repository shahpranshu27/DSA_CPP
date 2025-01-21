// length of largest subarray with sum 0
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// int solve(vector<int>&arr){
//     int maxLen = 0;
//     unordered_map<int, int> sumMap;
//     int sum = 0;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//         if(sum == 0){
//             maxLen = i+1;
//         }
//         else if(sumMap.find(sum) != sumMap.end()){
//             maxLen = max(maxLen, i-sumMap[sum]);
//         }
//         else{
//             sumMap[sum] = i;
//         }
//     }
//     return maxLen;
// }

int maxLen(vector<int>& arr){
    int n = arr.size();
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0){
            maxi = i+1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                maxi = max(maxi, i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {9,-3,3,-1,6,-5};
    cout<<maxLen(arr)<<endl;
    return 0;
}