// find subarray with given sum (non-negative numbers)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void sumArray(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        int currentSum = arr[i];
        if(currentSum == sum){
            cout << " sum at index " << i << endl;
            return; 
        }
        else{
            for(int j=i+1; j<n; j++){
                currentSum += arr[j];
                if(currentSum == sum){
                    cout << "sum found between indices " << i<<" and " <<j<<endl;
                    return;
                }
            }
        }
    }
    cout<<"no subarray found " << endl;
    return;
}
int main()
{
    int arr[] = {2,33,4,5,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 37;
    sumArray(arr, n, sum);
    return 0;
}