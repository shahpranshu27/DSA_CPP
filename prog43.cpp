#include<iostream>
using namespace std;
//error in push_back, see it later
void arrIntersection(int arr1[],int arr2[], int n, int m){
	
	int ans = 0;
	for(int i=0; i<n; i++){
		int element = arr1[i];
		
		for(int j=0; j<m; j++){
			if(element == arr2[j]){
				ans.push_back(element);
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
	cout << ans;
}

int main(){
	
	int even[6] = {1,2,3,4,5,6};
	int odd[5] = {2,3,7,8,9};
	arrIntersection(even, odd, 6, 5);
	
}