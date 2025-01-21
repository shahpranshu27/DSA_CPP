#include<bits/stdc++.h>
using namespace std;
//vectors
void printVec(vector<int> v){
	cout << "size of vector : " << v.size() << endl ;
	cout << "vector elements : " << endl;
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	
	vector<int> v;
	int n;
	cout << "how many elements you want to enter in vector : " << " ";
	cin >> n;
	cout << "enter elements : " << " ";
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	printVec(v);
}