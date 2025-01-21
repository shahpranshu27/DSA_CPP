// rearrange array such that arr[i] = i
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void fixArray(int arr[], int n){
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[j] == i){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                break;
            }
        }
    }
    for(i=0; i<n; i++){
        if(arr[i]!=i){
            arr[i] = -1;
        }
    }
    cout<<"array after rearranging : "<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {3,5,8,1,0,7,6,2,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    fixArray(arr, n);
    return 0;
}