#include<iostream>
using namespace std;
//calculator
int main(){
	int a,b;
	
	cout << "enter a : " << endl;
	cin >> a;
	
	cout << "enter b : " << endl;
	cin >> b;
	
	char op;
	cout << "enter operation : " << endl;
	cin >> op;
	
	switch( op ){
		case '+': cout << "addition : " << a+b << endl;
				break;
		case '-': cout << "subtraction : " << a-b <<endl;
				break;
		case '*': cout << "Product : " << a*b << endl;
				break;
		case '/': cout << "quotient : " << a/b << endl;
				break;
		case '%': cout << " reaminder : " << a%b << endl;
				break;
		default: cout << " enter valid operator " << endl;
	}
	return 0;
}