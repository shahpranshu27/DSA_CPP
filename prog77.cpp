// unique numbers
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findUnique(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    return ans;
}
int main()
{
    int arr[5]={1,2,4,2,1};
    findUnique(arr,5);
}