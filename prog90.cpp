// segregate even and odd elements using lamuto's partition

// method explained : 
// take i=-1, j=0, j will traverse the whole array, and i will be used to swap the even and odd elements
// when the element at j = even, swap it with i=0, and i++
// when the element at j is odd, just leave it as it it
// at the end, swap the element just after even elements with the last element of arr

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> arrayEvenAndOdd(vector<int>& arr){
    int i=-1, j=0;
    int pivot = arr.back();
    for(j=0;j<arr.size()-1;j++){
        if(arr[j]%2==0){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr.back()); // swap last element and the first odd element after the even elements i.e. i+1
    return arr;
}
int main()
{
    vector<int> arr = {7,2,5,4,8,1,9,6,3};
    vector<int> updatedArr = arrayEvenAndOdd(arr);
    // for(int num:updatedArr){
    //     cout<<num<<" ";
    // }
    for(int i=0;i<updatedArr.size();i++){
        cout<<updatedArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}