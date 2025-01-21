// find element that appears once, in an array where every elements appears twice
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findOne(int arr[], int n){
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                cnt+=1;
            }
        
        }
        if(cnt==1){
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<findOne(arr, n);
    return 0;
}