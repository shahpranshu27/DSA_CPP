// minimum days to make M bouquets
// you are given N roses and you are also given an array 'arr' where arr[i] denotes that ith rose will bloom on arr[i]th day
// you can also pick already bloomed roses that are adjacent to make a bouquet. you are also told that you require exactly 'k' adjacent bloomed roses to make single bouquet. find minimum number of days required to make atleast 'm bouquets each containing 'k' roses. return -1 if it's not possible

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool possible(vector<int>&arr, int day, int m, int k){
    int n = arr.size();
    int cnt=0;
    int noOfB=0;

    for(int i=0; i<n; i++){
        if(arr[i]<=day){
            cnt++;
        }
        else{
            noOfB+=(cnt/k); // how many bouquets can be formed from cnt bloomed flowers, where we have to take 'k' flowers each
            cnt=0;
        }
    }
    noOfB+=(cnt/k);
    return noOfB>=m;
}
int roseGarden(vector<int>&arr, int k, int m){
    long long val = m*1ll*k*1ll;
    int n=arr.size();
    if(val>n) return -1;
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0; i<n; i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    // for(int i=mini ;i<=maxi; i++){
    //     if(possible(arr, i, m, k)) return i;
    // }
    // return -1;

    // binary search
    int low=mini, high=maxi;
    while(low<=high){
        int mid = (low+high)/2;
        if(possible(arr, mid, m, k)){
            high = mid-1;
        }
        else low = mid+1;
    }
    return low;
}
int main()
{
    vector<int> arr = {7,7,7,7,13,11,12,7};
    int k=3, m=2;
    int ans = roseGarden(arr, k, m);
    if(ans==-1) cout<<"We can not make bouquet";
    else{
        cout<<ans;
    }
    return 0;
}