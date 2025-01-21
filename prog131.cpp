// longest subarray with sumk [ +ve and -ve ]
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int subArr(vector<int> arr, int K){
    map<int, int> preSum;
    int maxLen = 0;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        if(sum == K){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - K;
        if(preSum.find(rem) != preSum.end()){
            int len = i-preSum[rem];
            maxLen = max(maxLen, len);
        }
        preSum[sum] = i;
    }
    return maxLen;
    // int n = a.size(); // size of the array.

    // map<int, int> preSumMap;
    // int sum = 0;
    // int maxLen = 0;
    // for (int i = 0; i < n; i++) {
    //     //calculate the prefix sum till index i:
    //     sum += a[i];

    //     // if the sum = k, update the maxLen:
    //     if (sum == k) {
    //         maxLen = max(maxLen, i + 1);
    //     }

    //     // calculate the sum of remaining part i.e. x-k:
    //     int rem = sum - k;

    //     //Calculate the length and update maxLen:
    //     if (preSumMap.find(rem) != preSumMap.end()) {
    //         int len = i - preSumMap[rem];
    //         maxLen = max(maxLen, len);
    //     }

    //     //Finally, update the map checking the conditions:
    //     if (preSumMap.find(sum) == preSumMap.end()) {
    //         preSumMap[sum] = i;
    //     }
    // }

    // return maxLen;
}
int main()
{
    vector<int> arr={-3,-2,-1,2,3,5,1,9};
    int k = -4;
    int len=subArr(arr, k);
    cout<<len;
    return 0;
}