#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int space=row-1;
		while(space){
			cout<<" ";
			space-=1;
		}
		int col=1;
		while(col<=n-row+1){
			char ch='*';
			cout<<ch;
			col++;
		}
		cout<<endl;
		row+=1;
	}
}