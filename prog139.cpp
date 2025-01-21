// leaders in ana array : a leader is an element that is greater than all other elements on their right side of the arary 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> leader(vector<int> arr){
    // brute force : 
    int n = arr.size();
    // vector<int> leaders;
    // for(int i=0; i<n; i++){
    //     bool isLeader = true;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] < arr[j]){
    //             isLeader = false;
    //             break;
    //         }
    //     }
    //     // return arr[i];
    //     if(isLeader){
    //         leaders.push_back(arr[i]);
    //     }
    // }
    // return leaders;

    // optimal approach : 
    vector<int> ans;
    // last element of an array is always a leader, therefore push it into array
    int max = arr[n-1];
    ans.push_back(arr[n-1]);

    // start checking from end whether a num is greater than max no. from the right, hence leader
    for(int i=n-2; i>=0; i--){
        if(arr[i] > max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    return ans;
}
int main()
{
    // vector<int> arr = {4,7,1,0};
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> leaders = leader(arr);
    for(auto it:leaders){
        cout<<it<<" ";
    }
    return 0;
}