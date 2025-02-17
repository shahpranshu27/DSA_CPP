// floor and ceil value of a target value
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findFloor(vector<int>&arr, int n, int x){
    int low=0, high=n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int findCeil(vector<int>&arr, int n, int x){
    int low=0, high=n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
pair<int, int> getFloorAndCeil(vector<int>&arr, int n, int x){
    int f = findFloor(arr, n, x);
    int c = findCeil(arr, n, x);
    return make_pair(f, c);
}
int main()
{
    vector<int> arr = {3,4,4,7,8,10};
    int n = arr.size();
    int x = 5;
    pair<int, int> ans = getFloorAndCeil(arr, n, x);
    cout<<"Floor : "<<ans.first<<" and Ceil : "<<ans.second<<endl;
    return 0;
}