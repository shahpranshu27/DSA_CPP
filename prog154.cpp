// count inversions in an array i.e. arr[j]<arr[i]
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// if array is sorted, 0 inversions
// if array is sorted in reverse order, max inversions
int merge(vector<int>&arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    int cnt = 0;

    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt += (mid-left+1);
            right++;
        }
    }
    while (left<=mid) 
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low]; // add all the remaining elements in left and right half to  temp array
    }
    return cnt;
}
int mergeSort(vector<int>&arr, int low, int high){
    int cnt = 0;
    if(low>=high) return cnt;

    int mid = (low+high)/2;
    cnt+=mergeSort(arr, low, mid); // left half
    cnt+=mergeSort(arr, mid+1, high); // right half
    cnt+=merge(arr, low, mid, high); // merging 2 halves
    return cnt;
}
int inversion(vector<int>&a, int n){
    // int cnt = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[i]>a[j]) cnt++;
    //     }
    // }
    // return cnt;

    return mergeSort(a, 0, n-1);
}
int main()
{
    vector<int> a = {5,4,3,2,1};
    int n = a.size();
    int cnt = inversion(a, n);
    cout<<cnt<<endl;
    return 0;
}