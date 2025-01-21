#include<iostream>
using namespace std;
// nested switch case
int main(){
	char ch = '1';
	int num = 1;
	
	switch( ch ){
		case 1 : cout << " first " << endl;
				break;
		case '1' : switch ( num ){
						case 1 : cout << "value is " << num << endl;
								break;
				}
				break;
		default : cout << " default case " << endl;
	}
}