#include<iostream>
using namespace std;
//unique element
void findUnique(int arr[], int size){
	int ans = 0;
	for(int i=0;i<=size;i++){
		ans = ans ^  arr[i]; // xor of each elements
	}
	cout << "unique element : " << ans;
}
int main(){
	int odd[7] = {1,3,4,3,1,4,5};
	findUnique(odd, 7);
}