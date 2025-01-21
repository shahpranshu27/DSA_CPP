// find majority element that occurs more than n/2 times
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int majority(vector<int> arr){
    // int n = arr.size();
    // for(int i=0; i<n; i++){
    //     int cnt = 0;
    //     for(int j=0; j<n; j++){
    //         if(arr[j] == arr[i]){
    //             cnt++;
    //         }
    //     }
    //     if(cnt > (n/2)){
    //         return arr[i];
    //     }
    // }
    // return -1;

    // using hashmaps, storing in the form of key-value pair, and returning key with max value
    int n = arr.size();
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector <int> arr = {2, 2, 1, 1, 1, 2, 2, 1, 1};
    cout<<majority(arr);
    return 0;
}