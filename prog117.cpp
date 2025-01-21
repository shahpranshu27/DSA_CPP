// quick sort, ascending and descending order
// pick a pivotal element, then place it in the correct position.
// place smaller elements on left and larger elements on right, then repeat the same process for left and right side elements
// how the algo works?
// choose 1st element as pivotal element, then take low and high indices as 1st and last element of the array.
// take 2 loops of i and j respctively, where i starts from 1st, and j starts from end. then if the element from i is greater than pivotal element, then stop at that index. move to j, and start seeing element if the element is less than pivotal element, if it is, then stop at that index.
// swap elements at indices i and j, and in similar way i++, and j--
// at a certain point, j will be less than i, so stop swapping.
// the last element which is lesser than pivotal element, swap it with pivotal element
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}
void quickSort(vector<int> &arr){
    qs(arr, 0, arr.size()-1);
    // return arr;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quickSort(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}