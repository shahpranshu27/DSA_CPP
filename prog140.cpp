// longest consecutive sequence in an array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool linearSearch(vector<int> &arr, int num){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}
int longestConsecutive(vector<int> arr){
    // brute force : 
    // int longest = 1;
    // int n = arr.size();
    // for(int i=0; i<n; i++){
    //     int x = arr[i];
    //     int cnt = 1;
    //     while(linearSearch(arr, x+1) == true){
    //         x = x+1;
    //         cnt += 1;
    //     }
    //     longest = max(longest, cnt);
    // }
    // return longest;

    // better apporach : 
    // if(arr.size() == 0) return 0;
    // sort(arr.begin(), arr.end());
    // int n = arr.size();
    // int lastSmaller = INT_MIN;
    // int cnt = 0;
    // int longest = 1;
    // for(int i=0; i<n; i++){
    //     if(arr[i]-1 == lastSmaller){
    //         cnt += 1;
    //         lastSmaller = arr[i];
    //     }
    //     else if(lastSmaller != arr[i]){
    //         cnt = 1;
    //         lastSmaller = arr[i];
    //     }
    //     longest = max(longest, cnt);
    // }
    // return longest;

    // optimal solution : 
    int n = arr.size();
    if(n == 0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main()
{
    vector<int> arr = {100,200,1,2,3,4};
    cout<<longestConsecutive(arr);
    return 0;
}