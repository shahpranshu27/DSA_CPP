// find 3 greatest elements from an array

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print3largest(int arr[], int arr_size){
    int first, second, third;
    if(arr_size<3){
        cout<<"invalid output";
        return ;
    }
    third = first = second = INT_MIN;
    for(int i=0;i<arr_size;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if (arr[i]>second and arr[i]!=first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i]>third and arr[i]!=second)
        {
            third=arr[i];
        }
    } 
    cout<< "3 largest elements are : "<<first<<" "<<second<<" "<<third<<" ";

}
int main()
{
    int arr[]={12, 13, 11, 190, 45, 34, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr, n);
    return 0;
}