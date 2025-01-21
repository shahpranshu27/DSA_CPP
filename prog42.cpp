#include<iostream>
using namespace std;

void findDuplicate(int arr[], int size){
	int ans = 0;
	// XOR ing all array elements
	for (int i=0; i<size;i++){
		ans = ans ^ arr[i];
	}
	// XOR [1,n-1]
	for (int i=0; i<size;i++){
		ans = ans ^ i;
	}
	cout << ans;
}

int main(){
	
	int even[4] = {1,2,3,1};
	findDuplicate(even, 4); 
	
}