#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // pre compute
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // for iterating over all elements
    int maxF = 0, minF = n;
    int maxE = 0, minE = 0;
    for(auto it : mpp){
        cout<<it.first<<" -> "<< it.second<<endl;
        int cnt = it.second;
        int element = cnt;
        if(cnt>maxF){
            maxF = cnt;
            maxE = element;
        }
        if(cnt<minF){
            minF = cnt;
            minE = element;
        }
    }
    cout<<"highest freq : "<<maxE<<endl;
    cout<<"lowest freq : "<<minE<<endl;

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        // fetch
        cout<<mpp[num]<<endl;
    }
    return 0;
}