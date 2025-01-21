#include<iostream>
using namespace std;
//selection sort

void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
      cout << arr[i] << " ";
//      cout << endl;
    }
}

void selectionSort(int arr[], int n){
	
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr[minIndex], arr[i]);
	}
}


int main(){
	
	int even[5] = {2,5,1,4,8};
	
	selectionSort(even, 5);
	printArray(even, 5);	
}