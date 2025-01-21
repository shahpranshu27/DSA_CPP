// find number that appears once, and others appears twice
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getSingle(vector<int> &arr){
    // int n = arr.size();
    // we find max element from the array, and initialized the size of hash array as max+1
    // int maxi = arr[0];
    // for(int i=0; i<n; i++){
    //     maxi = max(maxi, arr[i]);
    // }
    // vector<int> hash(maxi+1, 0);
    // for(int i=0; i<n; i++){
    //     hash[arr[i]]++;
    // }
    // for(int i=0; i<n; i++){
    //     if(hash[arr[i]]==1){
    //         return arr[i];
    //     }
    // }
    // return -1;
    // int n = arr.size();

    // // Declare the hashmap.
    // // And hash the given array:
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++) {
    //     mpp[arr[i]]++;
    // }

    // //Find the single element and return the answer:
    // for (auto it : mpp) {
    //     if (it.second == 1)
    //         return it.first;
    // }

    // //This line will never execute
    // //if the array contains a single element.
    // return -1;
    int n = arr.size();
    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr^arr[i];
    }
    return xorr;
}
int main()
{
    vector<int> arr = {1,2,3,4,3,2,1};
    cout<<getSingle(arr)<<endl;
    return 0;
}