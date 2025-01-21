// count occurences in sorted array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int firstOccurence(vector<int>&arr, int n, int k){
    int low = 0, high = n-1;
    int first = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            first = mid;
            high = mid-1; // look for smaller index on left
        }
        else if(arr[mid] < k){
            low = mid+1; // look on right
        }
        else{
            high = mid-1; // look on left
        }
    }
    return first;
}
int lastOccurence(vector<int>&arr, int n, int k){
    int low = 0, high = n-1;
    int last = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            last = mid;
            low = mid+1; // look for smaller index on right
        }
        else if(arr[mid] < k){
            low = mid+1; // look on right
        }
        else{
            high = mid-1; // look on left
        }
    }
    return last;
}
pair<int, int> firstAndLast(vector<int>&arr, int n, int k){
    int first = firstOccurence(arr, n, k);
    if(first == -1) return {-1, -1};
    int last = lastOccurence(arr, n, k);
    return {first, last};
}
int count(vector<int>&arr, int n, int k){
    // int cnt = 0;
    // for(int i=0; i<n; i++){
    //     if(arr[i] == x){
    //         cnt++;
    //     }
    // }
    // return cnt;
    pair<int, int> ans = firstAndLast(arr, n, k);
    if(ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}
int main()
{
    vector<int> arr = {2,4,6,8,8,8,11,13};
    int n = arr.size();
    int x = 8;
    cout<<"The number of occurences is : "<<count(arr, n, x)<<endl;
    return 0;
}