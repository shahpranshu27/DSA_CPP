//sum of even numbers from 1 to n
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n : ";
	cin>>n;
	
	int i=1;
	int sum=0;
	for(i=0;i<=n;i++)
	{
		if(i%2==0){
			sum=sum+i;
		}
		i+=1;
	}
	cout<<"sum : "<<sum<<endl;
}