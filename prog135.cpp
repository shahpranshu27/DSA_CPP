// kadane's algorithm : maximum sub array sum in an array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxSubArr(vector<int> arr, int n){
    // int maxi = INT_MIN;
    // brute force : 
    // int maxi = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){
    //             sum += arr[k];
    //         }
    //         maxi = max(maxi, sum);
    //     }
    // }
    // return maxi;

    // better solution : 
    // int maxi = 0;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum += arr[j];
    //         maxi = max(maxi, sum);
    //     }
    // }
    // return maxi;

    // optimal approach : 
    long long maxi = LONG_MIN;
    long long sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2,-1,-3,2,1,4,6,-5};
    // vector<int> arr = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10 };
    int n = arr.size();
    cout<<maxSubArr(arr, n);
    return 0;
}