// remove duplicates from array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    // set<int> set;
    // for(int i=0; i<n; i++){
    //     set.insert(arr[i]);
    // }
    // int k = set.size();
    // int j=0;
    // for(int x:set){ // x acts a an iterator in set
    //     arr[j++] = x; // arr[j] = x; j++;
    // }
    // return k;
    sort(arr, arr+n);
    int i = 0; // i is the pointer, which takes unique elements
    for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) { // if any element doesn't repeat, then only i++, and arr[i] = arr[j]
        i++;
        arr[i] = arr[j];
    }
    }
    return i + 1;
}
int main() {
    int arr[] = {1,1,2,2,2,3,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
    }
}