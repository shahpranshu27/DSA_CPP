/* pattern
4321
4321
4321
4321
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1;
			j+=1;	
		}
	cout<<endl;
	i+=1;
	}
}