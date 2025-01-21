// rearranging elements in array by sign
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> reArrange(vector<int> arr, int n){
    // brute force : 
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else if(arr[i]<0){
            neg.push_back(arr[i]);
        }
    }
    for(int i=0; i<n/2; i++){
        arr[2*i] = pos[i]; // at even positins -> positive
        arr[2*i+1] = neg[i]; // at odd positions -> negative
    }
    return arr;
}
int main()
{
    vector<int> arr = {1,2,-4,-5};
    int n = arr.size();
    vector<int> ans = reArrange(arr, n);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}