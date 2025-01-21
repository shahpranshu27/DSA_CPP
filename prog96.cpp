// print all distinct elements from array

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// method 1 :
// void printDistinct(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for( j=0; j<i; j++){
//             if(arr[i]==arr[j]){
//                 break;
//             }
//         }
//         if(i==j){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,5,2,4,7,1,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printDistinct(arr, n);
//     return 0;
// }

// by using set
// int main()
// {
//     vector<int> v {1,2,3,5,2,4,7,1,3};
//     set<int>s(v.begin(), v.end());
//     cout<<"distinct elements : ";
//     for(auto i:s){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }