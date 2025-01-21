// buy and sell the stock
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int stock(vector<int> arr, int n){
    // brute force : 
    // int maxi = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j] > arr[i]){
    //             // maxi = arr[j] - arr[i];
    //             maxi = max(arr[j] - arr[i], maxi);
    //         }
    //     }
    // }
    // return maxi;

    // optimal approach : 
    int maxi = 0;
    int minPrice = INT_MAX;
    for(int i=0; i<n; i++){
        minPrice = min(minPrice, arr[i]);
        maxi = max(maxi, arr[i] - minPrice);
    }
    return maxi;
}
int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    int n = arr.size();
    cout<<stock(arr, n);
    return 0;
}