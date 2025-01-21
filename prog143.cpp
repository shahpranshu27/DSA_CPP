// count no. of subarrays with sum equals k
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findSubArr(vector<int> &arr, int k){
    int n = arr.size();
    // brute force : 
    // int cnt = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int K=i; K<=j; K++){
    //             sum += arr[K];
    //         }
    //         if(sum == k){
    //             cnt ++;
    //         }
    //     }
    // }
    // return cnt;

    // better approach : 
    // int cnt = 0;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum += arr[j];
    //         if(sum == k){
    //             cnt++;
    //         }
    //     }
    // }
    // return cnt;

    // optimal approach using hashmap and prefixSum :
    // for better understanding watch this video (dry run part) : https://www.youtube.com/watch?v=xvNwoz-ufXA&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=33&t=208s 

    map<int, int> mpp;
    int preSum = 0, cnt = 0;
    mpp[0] = 1; // setting 0 in the map
    for(int i=0; i<n; i++){
        // add current element to prefix sum
        preSum += arr[i];

        // calculate x - k
        int remove = preSum - k;

        // add no. of subarrays to be removed
        cnt += mpp[remove];

        // update cnt of prefix sum in mpp
        mpp[preSum] += 1;
    }    
    return cnt;
}
int main()
{
    vector<int> arr = {3,1,2,4};
    int k = 6;
    cout<<"all subarrays : "<<findSubArr(arr,k);
    return 0;
}