// kth missing positive number
// you are given a strictly increasing array 'vec' and a positive integer 'k'. find kth positive integer missing from the vec
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingK(vector<int>&vec, int n, int k){
    // for(int i=0; i<n; i++){
    //     if(vec[i]<=k)k++;
    //     else break;
    // }
    // return k;
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing = vec[mid]-(mid+1);
        if(missing<k) low=mid+1;
        else high=mid-1;
    }
    return k+high+1;
}
int main()
{
    vector<int> vec = {4,7,9,10};
    int n=vec.size(), k=4;
    cout<<"the kth missing number is : "<<missingK(vec, n, k);
    return 0;
}