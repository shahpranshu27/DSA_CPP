// reversal algorithm for array rotation

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverseArray(vector<int>& arr,int k){
    int n = arr.size();
    k%=n; // mod k with size of array, to handle case where k is greater than size of array, i.e. if the k exceeds arr.size(), it gets divided with n. example if k=7, then k = 7 % 5 => 2, which gives value of k only, within the range of array
    reverse(arr.begin(), arr.end()); // reverse entire array
    reverse(arr.begin(), arr.begin()+k); // reverse first k elements
    reverse(arr.begin()+k, arr.end()); // reverse n-k elements, i.e. k to end elements
}
int main()
{
    vector<int> arr = {5,4,7,2,1};
    int k=2;
    reverseArray(arr, k);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}