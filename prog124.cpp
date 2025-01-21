// moving 0's to end of array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,0,2,0,3,0,5,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    vector<int> temp; // we stored all non zero elements in temp arr, then added them back in original array
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    // from 0 to temp.size() indices, we will print elements from temp array, and then from temp.size() to n indices, we will print 0s
    for(int i=0; i<temp.size(); i++){
        arr[i] = temp[i];
    }
    for(int i=temp.size(); i<n; i++){
        arr[i] = 0;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}