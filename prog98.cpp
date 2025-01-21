// leaders in an array
// leader in array is the element, which is greater than all other elements on it's right side
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// case 1
// void printLeaders(int arr[], int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]<=arr[j]){
//                 break;
//             }
//         }
//         if(j==n){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printLeaders(arr,n);
//     return 0;
// }

// case 2
void printLeaders(int arr[], int n){
    int max_from_right = arr[n-1];
    cout<<max_from_right<<" ";
    for(int i=n-2; i>=0; i--){
        if(max_from_right<arr[i]){
            max_from_right = arr[i];
            cout<<max_from_right<<" ";
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr,n);
    return 0;
}