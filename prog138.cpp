// next permutation : find next lexicographically greater permutation
// eg is arr = [1,2,3] -> {1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &arr){
    int n = arr.size();
    int ind = -1; // break point
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }
    // if break point doesn't exist
    if(ind == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    // step 2 : find next greater element and swap with arr[ind]
    for(int i=n-1; i>ind; i--){
        if(arr[i] > arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    // step 3 : reverse the right half
    reverse(arr.begin()+ind+1, arr.end());
    return arr;
}
int main()
{
    // int arr[] = {1,3,2};
    // int n = arr[0]/sizeof(arr[0]);
    // next_permutation(arr, arr+3);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    vector<int> arr = {2,1,5,4,3,0,0};
    vector<int> ans = nextGreaterPermutation(arr);
    cout << "next permutations is : ";
    for(auto it:ans){
        cout<< it <<" ";
    }
    return 0;
}

// vector<int> nextGreaterPermutation(vector<int> &A) {
//     int n = A.size(); // size of the array.

//     // Step 1: Find the break point:
//     int ind = -1; // break point
//     for (int i = n - 2; i >= 0; i--) {
//         if (A[i] < A[i + 1]) {
//             // index i is the break point
//             ind = i;
//             break;
//         }
//     }

//     // If break point does not exist:
//     if (ind == -1) {
//         // reverse the whole array:
//         reverse(A.begin(), A.end());
//         return A;
//     }

//     // Step 2: Find the next greater element
//     //         and swap it with arr[ind]:

//     for (int i = n - 1; i > ind; i--) {
//         if (A[i] > A[ind]) {
//             swap(A[i], A[ind]);
//             break;
//         }
//     }

//     // Step 3: reverse the right half:
//     reverse(A.begin() + ind + 1, A.end());

//     return A;
// }

// int main()
// {
//     vector<int> A = {2, 1, 5, 4, 3, 0, 0};
//     vector<int> ans = nextGreaterPermutation(A);

//     cout << "The next permutation is: [ ";
//     for (auto it : ans) {
//         cout << it << " ";
//     }
//     cout << "]";
//     return 0;
// }
