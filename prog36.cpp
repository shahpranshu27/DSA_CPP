#include<iostream>
using namespace std;
//linear search
bool search(int arr[], int size, int key){
	
	for (int i=0;i<=size;i++){
		if( arr[i] == key ){
			return 1;
		}
	}
	
	return 0;
	
}

int main(){
	
	int arr[10] = {1,4,7,2,23,55,77,-4,5,6};
	
	cout << "enter element to b esearched : ";
	int key;
	cin >> key;
	
	bool found = search(arr, 10, key);
	
	if( found ){
		cout << "element is there" << endl;
	}
	else{
		cout << "element is absent" << endl;
	}
	
}