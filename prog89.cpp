// rearrange an array in maximum minimum form using 2 pointer technique

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rearrange(int arr[], int n){
    int temp[n]; // just a temp array, to hold modified array
    int small=0, large=n-1;
    int flag=true; // to indicate whether we need to copy remaining largest or smallest at next position
    for(int i=0;i<n;i++){
        if(flag){
            temp[i]=arr[large--]; // therefore, at odd places, largest elements starts to sort in descending order, at indices like 0,2,4...
        }
        else{
            temp[i]=arr[small++]; // therefore at even places, the smallest elements start to sort in ascending order, at indices like 1,3,5...
        }
        flag = !flag;
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i]; // copy array from temp to arr
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    rearrange(arr, n);
    cout<<"rearranged array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}