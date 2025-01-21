#include<iostream>
#include<queue>
using namespace std;
//stl priority queue
int main(){
	//max - heap
	priority_queue<int> maxh;
	
	//min - heap
	priority_queue<int,vector<int>,greater<int>> minh;
	
	maxh.push(1);
	maxh.push(5);
	maxh.push(3);
	maxh.push(4);
	int n = maxh.size();
	cout  << "size : " << n << endl;
	for(int i=0; i<n;i++){
		cout << maxh.top() << " " ;
		maxh.pop();
	}
	cout << endl;
	minh.push(4); 
	minh.push(2);
	minh.push(6);
	minh.push(1);
	int m = minh.size();
	cout  << "size : " << m << endl;
	for(int i=0; i<m;i++){
		cout << minh.top() << " " ;
		minh.pop();
	}
}