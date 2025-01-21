// finding missing number from the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingNum(vector<int> &arr, int n){
    // for(int i=1; i<=n; i++){
    //     int flag = 0;
    //     for(int j=0; j<n-1; j++){
    //         if(arr[j]==i){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag == 0){
    //         return i;
    //     }
    // }
    // return -1;
    // hashing method, where we store the frequencies of each number, and if the freq of num is 0, then we return that index
    // int hash[n+1] = {0};
    // for(int i=0; i<n-1; i++){
    //     hash[arr[i]]++;
    // }
    // for(int i=1; i<=n; i++){
    //     if(hash[i] == 0){
    //         return i;
    //     }
    // }
    // return -1;
    int sum1 = (n*(n+1))/2;
    cout<<sum1<<endl;
    int sum2=0;
    for(int i=0; i<n; i++){
        sum2 += arr[i];
    }
    cout<<sum2<<endl;
    return sum1-sum2;
}
int main()
{
    int n = 5;
    vector<int> a = {1,2,3,5};
    cout<<missingNum(a, n)<<endl;
    return 0;
}