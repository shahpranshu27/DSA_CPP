#include<iostream>
using namespace std;
//bubble sort
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n){
	
	for(int i=0; i<n-i; i++ ){
		//for round 1 to n-1
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	
}

int main(){
	
	int odd[5] = {5,2,7,9,3};
	bubbleSort(odd, 5);
	printArray(odd, 5);
	
}