// spiral traversal of matrix
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> printSpiral(vector<vector<int>> mat){
    // define ans array to store the result
    vector<int> ans;
    int n = mat.size(); // no. of rows
    int m = mat[0].size(); // no. of columns

    // initialize the pointers required for traversal
    int top=0, bottom=n-1, left=0, right=m-1;

    // loop until all elements are not traversed
    while(top<=bottom && left<=right){
        // left to right
        for(int i=left; i<=right; i++){
            ans.push_back(mat[top][i]);
        }
        top++;

        // top to bottom
        for(int i=top; i<=bottom; i++){
            ans.push_back(mat[i][right]);
        }
        right--;

        // right to left
        for(int i=right; i>=left; i--){
            ans.push_back(mat[bottom][i]);
        }
        bottom--;

        // bottom to top
        for(int i=bottom; i>=top; i--){
            ans.push_back(mat[i][left]);
        }
        left++;
    }
    return ans;

    // vector<int> ans;
    // int n = mat.size();    // number of rows
    // int m = mat[0].size(); // number of columns

    // // initialize the pointers required for traversal
    // int top = 0, bottom = n - 1, left = 0, right = m - 1;

    // // loop until all elements are not traversed
    // while (top <= bottom && left <= right) {
    //     // left to right
    //     for (int i = left; i <= right; i++) {
    //         ans.push_back(mat[top][i]);
    //     }
    //     top++;

    //     // top to bottom
    //     for (int i = top; i <= bottom; i++) {
    //         ans.push_back(mat[i][right]);
    //     }
    //     right--;

    //     // check if there's still a row to traverse from bottom to top
    //     if (top <= bottom) {
    //         // right to left
    //         for (int i = right; i >= left; i--) {
    //             ans.push_back(mat[bottom][i]);
    //         }
    //         bottom--;
    //     }

    //     // check if there's still a column to traverse from right to left
    //     if (left <= right) {
    //         // bottom to top
    //         for (int i = bottom; i >= top; i--) {
    //             ans.push_back(mat[i][left]);
    //         }
    //         left++;
    //     }
    // }
    // return ans;

}
int main()
{
    vector<vector<int>> mat = {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}};
    vector<int> ans = printSpiral(mat);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}