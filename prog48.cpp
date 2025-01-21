#include<iostream>
#include<set>
using namespace std;
//set 
int main(){
	
	set<int> s;
	s.insert(5);
	s.insert(2);
	s.insert(6);
	s.insert(8);
	s.insert(1);
	
	for(auto i:s){
		cout << i << endl;
	}
	
	
	
	
}