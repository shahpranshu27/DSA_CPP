// koko eating bananas
// a monkey is given 'n' piles of bananas, whereas the ith pile has a[i] bananas. an integer h is also given, which donates the time(in hrs) for all bananas to be eaten.
// each hour, monkey chooses a non empty pile of bananas and eats 'k' bananas. if the pile contains less than 'k' bananas, then monkey consumes all the bananas and wont eat any more bananas in that hour. 
// find minimum number of bananas 'k' to eat per hour, so that monkey can eat all bananas in 'h' hours

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findMax(vector<int>&arr){
    int maxi = INT_MIN;
    int n = arr.size();

    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int calculateTotalHour(vector<int>&arr, int hourly){
    int totalH = 0;
    int n=arr.size();
    for(int i=0; i<n; i++){
        totalH += ceil((double)(arr[i])/(double)(hourly));
    }
    return totalH;
}
int minimumRateToEatBananas(vector<int>&arr, int h){
    // int maxi = findMax(arr);
    // for(int i=1; i<=maxi; i++){
    //     int reqTime = calculateTotalHour(arr, i);
    //     if(reqTime<=h) return i;
    // }
    // return maxi;

    // optimal approach : binary search
    int low=1, high=findMax(arr);
    while(low<=high){
        int mid = (low+high)/2;
        int totalH = calculateTotalHour(arr, mid);
        if(totalH<=h) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main()
{
    // vector<int>arr = {7,15,6,3};
    vector<int>arr = {30,11,23,4,20};
    // int h = 8;
    int h = 6;
    int ans = minimumRateToEatBananas(arr, h);
    cout<<ans;
    return 0;
}
