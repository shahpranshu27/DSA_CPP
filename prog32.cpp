#include<iostream>
using namespace std;
//power func
int power(int a,int b){
	
	int ans = 1;
	for(int i = 1; i<=b ; i++){
		ans *=a;
	}
	return ans;
}

int main(){
	int a,b;
	cout << " enter a : " << endl;
	cin >> a;
	cout << " enter b : " << endl;
	cin >> b;
	
	int answer = power(a,b);
	cout << " power : " << answer <<endl;
	return 0;
}