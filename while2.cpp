//this code finds sum till n 1+2+3...n
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter value of n:";
	cin>>n;
	int sum=0,i=2;
	while(i<=n)
	{
		sum=sum+i;
		cout<<"sum is:"<<sum<<endl;
		i++;
	}
	cout<<"final sum till "<<n<<"is "<< sum<<endl;
}
