// set matrix zero
// if there's a 0, the whole row and column should turn to 0
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// void markRow(vector<vector<int>> &arr, int n, int m, int i){
//     for(int j=0; j<m; j++){
//         if(arr[i][j] != 0){
//             arr[i][j] = -1;
//         }
//     }
// }
// void markCol(vector<vector<int>> &arr, int n, int m, int j){
//     for(int i=0; i<n; i++){
//         if(arr[i][j] != 0){
//             arr[i][j] = -1;
//         }
//     }
// }
vector<vector<int>> makeZero(vector<vector<int>>&arr, int n, int m){
    // int n = arr.size();
    // int m = arr[0].size();
    // set -1 to all elements of rows and cols with 0
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(arr[i][j] == 0){
    //             markRow(arr, n, m, i);
    //             markCol(arr, n, m, j);
    //         }
    //     }
    // }

    // // mark all -1 as 0s
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(arr[i][j] == -1){
    //             arr[i][j] = 0;
    //         }
    //     }
    // }
    // return arr;

    int row[n] = {0};
    int col[m] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                row[i] = 1; // mark ith index of row with 1 
                col[j] = 1; // mark jth index of col with 1
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                arr[i][j] = 0;
            }
        }
    }
    return arr;

    // for better understanding, watch : https://www.youtube.com/watch?v=N0MgLvceX7M&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=30
}
int main()
{
    vector<vector<int>> arr = {{1,1,1},{1,0,1},{1,1,1}};
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> ans = makeZero(arr, n, m);
    cout<<"final matrix : ";
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}