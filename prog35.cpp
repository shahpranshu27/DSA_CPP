#include<iostream>
using namespace std;
//prime number
bool isPrime( int n ){
	
	for (int i=2; i<=n; i++){
		if(n%i == 0 ){
			return 0;
		}
		else{
			return 1;
		}
	}
//	return 1;
}

int main(){
	int n;
	cin >> n;
	
	if (isPrime(n)){
		cout << n << " is a prime no. " << endl;
	}
	else{
		cout << n << " is not a prime no. " << endl;
	}
}
	