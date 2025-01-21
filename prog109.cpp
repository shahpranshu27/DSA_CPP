// hashing example, using hash maps
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // pre compute
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // for iterating over all elements
    for(auto it : mpp){
        cout<<it.first<<" -> "<< it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        // fetch
        cout<<mpp[num]<<endl;
    }
    return 0;
}
// if you want to iterate string, using map
// map <char, int>
// what you want to convert is first, and what you want after converting is second
// map : the elements are in a specific order
// unordered_map : elements are in random order, no any specific order
// using unordered_map is preferred, as it's best and avg time complexity is O(1), and worst is O(n), and worst case occurs very rarely, in case of internal collisions
// what is collision?
// when all the elements end up making a linear chain, at just 1 place, which is very very rare, is called internal collision.
// eg. 8->18->28->38->48..... all elements at index 8, so it is internal collision 
