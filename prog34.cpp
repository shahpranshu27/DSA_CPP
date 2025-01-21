#include<iostream>
using namespace std;

int fact(int n){
	int fact=1;
	for(int i=1 ; i<=n ; i++){
		fact*=i;
	}
	return fact;
}

int ncr(int n,int r){
	
	int num = fact(n);
	
	int denom = fact(r) * fact(n-r);
	
	int ans = num/denom;
	
	return ans;
	
}

int main(){
	int n,r;
	cout << "enter n : " ;
	cin >> n ;
	cout << "enter r : " ;
	cin >> r ;
	cout << "answer : " << ncr(n,r) << endl;
}