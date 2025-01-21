// two sum : check if pair with given sum exists in array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string twoSum(vector<int> arr, int n, int target){
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] + arr[j] == target) return "Yes";
    //     }
    // }
    // return "No";
    // unordered_map<int, int> mpp;
    // for(int i=0; i<n; i++){
    //     int num = arr[i];
    //     int moreNeeded = target - num;
    //     if(mpp.find(moreNeeded) != mpp.end()){
    //         return "Yes";
    //     }
    //     mpp[num] = i;
    // }
    // return "No";
    sort(arr.begin(), arr.end());
    int left=0, right=n-1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "Yes";
        }
        else if(sum < target) left++; // if arr[left] + arr[right] < sum -> left++
        // if arr[left] + arr[right] > sum -> right--
        else right--;
    }
    return "No";
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int target = 9;
    cout<<twoSum(arr, n, target); 
    return 0;
}