// majority elements (>N/3 times) | Find element that appears more than N/3 times in an array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> majority(vector<int> arr){
    int n = arr.size();
    vector<int> ls; // list of answers

    // brute force : 
    // for(int i=0; i<n; i++){
    //     // selected element is arr[i], checking if arr[i] is not already a part of answer
    //     if(ls.size() == 0 || ls[0] != arr[i]){
    //         int cnt = 0;
    //         for(int j=0; j<n; j++){
    //             if(arr[j] == arr[i]){
    //                 cnt++;
    //             }
    //         }
    //         if(cnt>(n/3)){
    //             ls.push_back(arr[i]);
    //         }
    //     }
    //     if(ls.size() == 2) break;
    // }
    // return ls;

    // better approach : using hashmap, storing counts of elements in key value pair
    map<int, int> mpp;
    int mini = int(n/3) + 1;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;

        if(mpp[arr[i]] == mini){
            ls.push_back(arr[i]); // only those elements whose cnt is >n/3 is stored in ls
        }
        if(ls.size() == 2) break;
    }
    return ls;

    // optimal solution : not done yet, for better understanding watch https://www.youtube.com/watch?v=vwZj1K0e9U8&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=35 (chapter optimal soln)
}
int main()
{
    vector<int> arr = {11, 33, 11, 11, 33, 44, 44, 33};
    vector<int> ans = majority(arr);
    cout<<"majority elements : ";
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}