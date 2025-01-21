// longest subarray with given sum k(positive)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int subArr(vector<int> arr, long long K){
    // int n = arr.size();
    // int len = 0;
    // for(int i=0; i<n; i++){
    //     long long s = 0;
    //     for(int j=i; j<n; j++){ // O(n2)
    //         // for(int k=i; k<=j; k++){ // O(n3)
    //             s+=arr[j];
    //         // }
    //         if(s == K){
    //             len = max(len, j-i+1);
    //         }
    //     }
    // }
    // return len;
    map<long long, int> preSumMap;
    int maxLen = 0;
    long long sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum == K){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - K;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen - max(maxLen, len);
        }
        preSumMap[sum] = i;
    }
    return maxLen;
}
int main()
{
    vector<int> arr={2,3,5,1,9};
    long long k = 10;
    int len=subArr(arr, k);
    cout<<len;
    return 0;
}