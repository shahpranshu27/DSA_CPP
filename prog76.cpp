#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlt(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[6]={2,3,6,7,9,4};
    int odd[5]={1,5,4,8,2};
    swapAlt(even,6);
    printArr(even,6);
    swapAlt(odd,5);
    printArr(odd,5);
}