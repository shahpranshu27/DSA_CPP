#include<iostream>
using namespace std;
// 100,50,20,1 rs notes
int main(){
	int amt;
	cout << "enter amt : " << endl;
	cin >> amt;
	
	int rs100,rs50,rs20,rs1;
	
	switch(1){
		case 1: rs100 = amt/100;
				amt = amt % 100;
				cout << "100 rs notes : " << rs100 << endl;
//				break;
		case 2: rs50 = amt/50;
				amt = amt % 50;
				cout << "50 rs notes : " << rs50 << endl;
//				break;
		case 3: rs20 = amt/20;
				amt = amt % 20;
				cout << "20 rs notes : " << rs20 << endl;
//				break;
		case 4: rs1 = amt/1;
				amt = amt % 1;
				cout << "1 rs notes : " << rs1 << endl;
//				break;
	}
}