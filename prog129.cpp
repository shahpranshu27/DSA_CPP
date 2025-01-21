// finding max consecutive 1's in an array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxCon(vector<int> arr){
    int cnt = 0;
    int maxi = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==1){
            cnt+=1;
        }
        else{
            cnt = 0;
        }
        maxi = max(maxi, cnt);
    }
    return maxi;
}
int main()
{
    vector<int> arr = {1,1,0,1,1,1};
    cout<<"max 1's : "<<maxCon(arr);
    return 0;
}