#include<iostream>
using namespace std;
//binary search
int binarySearch(int arr[], int size, int key){
	
	int start = 0;
	int end = size - 1;
	
	int mid = (start + end)/2;
	
	while(start <= end){
		
		if(arr[mid] == key){
			return mid;
		}
		
		if(key  > arr[mid]){
			start = mid + 1; // right part
		}
		else{ 
			end = mid - 1; //left part
		}		
		
		mid = (start+end)/2;
	}
	return -1;
}


int main(){
	
	int even[6] = {2,4,6,8,10,12};
	int odd[5] = {3,5,7,9,11};
	
	int index = binarySearch(even,6,10);
	cout << "index of 10 is : " << index << endl;
	
	int index1 = binarySearch(odd,5,9);
	cout << "index of 9 is : " << index1 << endl;
	
}