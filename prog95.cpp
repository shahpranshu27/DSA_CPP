// count the number of possible traingles 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// case 1 : Brute force
// int findTriangles(int arr[], int n){
//     int count = 0;
//     // arr[i]+arr[j]>arr[k] -> this logic is applied here, that the sum of 2 sides is greater than 3rd side, for all posible combinations
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]>arr[i]){
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[] = {10,21,22,103,100,200,300};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     cout << "total Triangles : " << findTriangles(arr, n);
//     return 0;
// }

// case 2 : count using sorting arrays
// int findTriangles(int arr[], int n)
// {
//     sort(arr, arr+n);
//     int count = 0;
//     for(int i=0; i<n-2; i++){
//         int k = i+2;
//         for(int j=i+1; j<n; j++){
//             while(k<n && arr[i]+arr[j]>arr[k]){
//                 k++;
//             }
//         if(k>j){
//             count+=k-j-1;
//         }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[] = {10,21,22,103,100,200,300};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     cout << "total Triangles : " << findTriangles(arr, n);
//     return 0;
// }
