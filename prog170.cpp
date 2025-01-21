// finding square root of a number using binary search
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findSqrt(int n){
    // int ans = 0;
    // for(long long i=1; i<=n; i++){
    //     long long val = i*i;
    //     if(val<=n*1ll){ // 1ll means, 1 as an integer but in long long form
    //         ans = i;
    //     }
    //     else break;
    // }
    // return ans;
    // int ans = sqrt(n);
    // return ans;

    // using binary search
    int low=1, high=n;
    while(low<=high){
        long long mid = (low+high)/2;
        long long val = mid*mid;
        if(val<=(long long)(n)){
            // eliminate the left half
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;
}
int main()
{
    int n = 28;
    int ans = findSqrt(n);
    cout<<"Square root of "<<n<<" is : "<<ans;
    return 0;
}