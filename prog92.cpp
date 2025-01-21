// print left rotation of array in O(n) time and O(1) space

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void leftRotate(int arr[], int k, int n){
    rotate(arr, arr+(k%n), arr+n);
    // rotate is a stl function, which a takes 3 arguements i.e. the beginning, the position by which it should be rotated, the end of array
    // here, array will be rotating left in linear time (k % n) times 
    // k => position, n=> totak array size
    // we take (k % n) becuase if we take k > n, then it will divide k with array size, and gives the value of k accordingly
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
    leftRotate(arr, k, n);
    return 0;
}