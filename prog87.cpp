// moving all 0's in array to the last

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void push_0(vector<int>& arr){
    stable_partition(arr.begin(), arr.end(), [](int n){return n!=0;});
}
int main()
{
    vector<int> arr{1,2,0,4,8,0,3,0,9,0,8};
    push_0(arr);
    for(const auto& i:arr){
        cout<<i<<' ';
    }
    cout<<"\n";
    return 0;
}