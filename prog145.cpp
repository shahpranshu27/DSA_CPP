// pascal's triangle
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// variation 1 : printing element at r and c
int nCr(int n, int r){
    long long res = 1;
    for(int i=1; i<=r; i++){
        res = res * (n-i+1);
        res = res / (i);
    }
    return res;
}

// int pascalTriangle(int r, int c){
//     int element = nCr(r-1, c-1);
//     return element;
// }

// variation 2 : printing whole row
// this function prints elements from 4C0 to 4C4 in this case
// void pascalTriangle(int n){ 
//     for(int c = 1; c<=n; c++){
//         cout<<nCr(n-1, c-1)<<" ";
//     }
// }

// optimized soln of variation 2 : 
// void pascalTriangle(int n){
//     long long res = 1;
//     cout<<res<<" ";
//     for(int i=1; i<n; i++){
//         res = res *(n-i);
//         res = res/i;
//         cout<<res<<" ";
//     }
//     cout<<endl;
// }

// variation 3 : 
vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    for(int row=1; row<=n; row++){
        vector<int> tempLst;
        for(int col=1; col<=row; col++){
            tempLst.push_back(nCr(row-1, col-1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}

int main()
{
    // int r = 5;
    // int c = 3;
    // cout<<"Element at (r,c) : "<<pascalTriangle(r,c);

    // int n = 5;
    // pascalTriangle(n);

    int n=5;
    vector<vector<int>> ans = pascalTriangle(n);
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}