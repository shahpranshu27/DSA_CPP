#include<iostream>
using namespace std;
//selection sort
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
}
// round 1 -> 0th element is sorted,1st index element is checked if it's greater than or less than element on 0th index
//round 2 -> 1st element is checked with 2nd index element,and checked greater or less then,then also checked with element on 0th index
//and so on.... 
void insertionSort(int arr[], int size){
	
	for(int i=1; i<size; i++){ //rounds darsha raha hai
		int temp = arr[i];
		int j=i-1;
		for(; j>=0; j--){
			if(arr[j] > temp){
				//shift
				arr[j+1] = arr[j];
			}
			else{ // ruk jao
				break;
			}
		}
		arr[j+1] = temp;
	}
	
}

int main(){
	
	int odd[5] = {3,2,5,7,4};
	insertionSort(odd, 5);
	printArray(odd, 5);
	
}