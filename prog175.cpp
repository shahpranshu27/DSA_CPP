// capacity to ship packages with D days
// you are the owner of shipment company, you use conveyor belts to ship packages from one port to another. the packages must be shipped with D days
// the weights of packages are given in array of wrights. the packages are loaded on the conveyor belts everyday in the same order as they appear in the array. the loaded weights must not exceed the min weight capacity of the ship. find out least weight capacity so that you can ship all the packages within d days

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findDays(vector<int> &weights, int cap){
    int days = 1;
    int load = 0;
    int n = weights.size();
    for(int i=0; i<n; i++){
        if(load+weights[i]>cap){
            days += 1; // move to next day
            load = weights[i]; // load the weight
        }
        else{
            load += weights[i]; // load the weight on same day
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weight, int d){
    // int maxi = *max_element(weight.begin(), weight.end());
    // int sum = accumulate(weight.begin(), weight.end(), 0);

    int low = *max_element(weight.begin(), weight.end());
    int high = accumulate(weight.begin(), weight.end(), 0);

    // for(int i=maxi; i<=sum; i++){
    //     if(findDays(weight, i)<=d){
    //         return i;
    //     }
    // }
    while(low<=high){
        int mid = (low+high)/2;
        int numberOfDays = findDays(weight, mid);
        if(numberOfDays<=d){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    // return -1;
}
int main()
{
    vector<int> weight = {5,4,5,2,3,4,5,6};
    int d = 5;
    int ans = leastWeightCapacity(weight, d);
    cout<<"minimum capacity should be : "<<ans;
    return 0;
}