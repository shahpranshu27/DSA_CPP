// maximum product subarray in an array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxProd(vector<int>&arr){
    // int result = INT_MIN;
    // for(int i=0; i<arr.size(); i++){
    //     int p = arr[i];
    //     for(int j=i+1; j<arr.size(); j++){
    //         result = max(result, p);
    //         p *= arr[j];
    //         // int prod = 1;
    //         // for(int k=i; k<=j; k++){
    //         //     prod *= arr[k];
    //         // }
    //         // result = max(result, prod);
    //     }
    //     result = max(result, p);
    // }
    // return result;

    int n = arr.size();
    int pre = 1, stuff = 1;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        if(pre == 0) pre=1;
        if(stuff == 0) stuff=1;
        pre*=arr[i];
        stuff*=arr[n-i-1];
        ans = max(ans, max(pre, stuff));
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,2,-3,0,-4,-5};
    cout<<maxProd(arr)<<endl;
    return 0;
}