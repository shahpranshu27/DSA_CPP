// count number of sub arrays with given xor with k
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int subArr(vector<int>&arr, int k){
    int n = arr.size();
    int cnt = 0;
    // brute force : 3 loops
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){

    //         int xorr = 0;
    //         for(int K=i; K<=j; K++){
    //             xorr = xorr ^ arr[K];
    //         }
    //         if(xorr == k) cnt++;
    //     }
    // }
    // return cnt;

    // better approach : 2 loops
    for(int i=0; i<n; i++){
        int xorr = 0;
        for(int j=i; j<n; j++){
            xorr = xorr ^ arr[j];
            if(xorr == k) cnt++;
        }
    }
    return cnt;

    // for optimal approach -> watch : https://www.youtube.com/watch?v=eZr-6p0B7ME&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=38 ( from timestamp : 8:04 )
}
int main()
{
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    cout<<"subarrays : "<<subArr(arr, k)<<endl;
    return 0;
}