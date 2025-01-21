// sort an array of 0's, 1's and 2's
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void sortArr(vector<int> &arr, int n){
    int cnt0=0, cnt1=0, cnt2=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i=0; i<cnt0; i++) arr[i] = 0;
    for(int i=cnt0; i<cnt0+cnt1; i++) arr[i] = 1;
    for(int i=cnt0+cnt1; i<cnt0+cnt1+cnt2; i++) arr[i] = 2;
}
int main()
{
    vector<int> arr = {0,1,0,2,2,1};
    int n = 6;
    // int n = sizeof(arr)/sizeof(arr[0]);
    sortArr(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}