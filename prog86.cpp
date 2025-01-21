// find second largest element in array

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print2ndlargest(int arr[], int arr_size){
    int i, first, second;
    if(arr_size<2){
        cout<<"invalid input!";
    }
    sort(arr, arr+arr_size);
    for(i=arr_size-2; i>0; i--){
            if(arr[i]!=arr[arr_size-1]){
                cout<<"2nd largest element : "<<arr[i];
                return;
            }
        }
    cout<<"there's no 2nd largest element in array";
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print2ndlargest(arr, n);
    return 0;
}