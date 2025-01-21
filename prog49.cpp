#include<iostream>
#include<map>
using namespace std;
//map
int main(){
	
	map<int,string> m;
	m[1] = "pranshu";
	m[2] = "yashvi";
	m[13] = "palkhiwala";
	
	for(auto i:m){
		cout << i.first << " " << i.second << endl;
	}
	
	cout << "find 12 : " << m.count(12) << endl; //0 represents false 
	cout << "find 13 : " << m.count(13) << endl; //1 reps true
	
}