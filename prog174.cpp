// find smallest divisor given a threshold 
// you are given an array of integers 'arr' and an integer i.e. threshold value 'limit'. your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given threshold. 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sumByD(vector<int>&arr, int div){
    int n=arr.size();
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=ceil((double)(arr[i])/(double)(div));
    }
    return sum;
}
int smallestDivisor(vector<int>&arr, int limit){
    int n = arr.size();
    // int maxi = *max_element(arr.begin(), arr.end());
    if(n>limit) return -1;
    // for(int i=1; i<=maxi; i++){
    //     int sum = 0;
    //     for(int j=0; j<n; j++){
    //         sum+= ceil((double)(arr[j])/(double)(i));
    //     }
    //     if(sum<=limit) return i;
    // }
    // return -1;
    int low=1, high=*max_element(arr.begin(), arr.end());
    while(low<=high){
        int mid=(low+high)/2;
        if(sumByD(arr, mid)<=limit){
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout<<ans;
    return 0;
}
