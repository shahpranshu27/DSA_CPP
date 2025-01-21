// merge 2 sorted arrays, without using extra space
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(long long arr1[], long long arr2[], int n, int m){
    // long long arr3[n+m];
    // int left = 0;
    // int right = 0;
    // int index = 0;

    // // insert the elements from 2 arrays into 3rd array using left and right pointers

    // while(left < n && right < m){
    //     if(arr1[left] <= arr2[right]){
    //         arr3[index] = arr1[left];
    //         left++, index++;
    //     }
    //     else{
    //         arr3[index] = arr2[right];
    //         right++, index++;
    //     }
    // }
    // // if right pointer reaches end
    // while(left < n){
    //     arr3[index++] = arr1[left++]; 
    // }

    // // if left pointer reaches end
    // while(right < m){
    //     arr3[index++] = arr2[right++];
    // }

    // for(int i=0; i<n+m; i++){
    //     if(i<n) arr1[i] = arr3[i];
    //     else arr2[i-n] = arr3[i];
    // }

    // optimal approach 1 : we will swap the bigger elements of arr1[] with the smaller elements of arr2[] until the minimum of arr2[] becomes greater or equal to the maximum of arr1[].
    // int left = n-1;
    // int right = 0;

    // // swap elements until arr1[left] < arr2[right]
    // while(left>=0 && right<m){
    //     if(arr1[left] > arr2[right]){
    //         swap(arr1[left], arr2[right]);
    //         left--, right++;
    //     }
    //     else break;
    // }
    // sort(arr1, arr1+n);
    // sort(arr2, arr2+m);

    // optimal approach 2 : 
}
int main()
{
    long long arr1[] = {1,4,8,10};
    long long arr2[] = {2,3,9};
    // int n = arr1.size();
    // int m = arr2.size();
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1, arr2, n, m);
    cout<<" the merged arrays are : "<<endl;
    cout<<"arr1[] = ";
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"arr2[] = ";
    for(int i=0; i<m; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}