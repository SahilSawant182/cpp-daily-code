#include<iostream>
using namespace std;
int main()
{
	char a; 
		cout<<"Enter char:"<<endl;
	cin>>a;

	if(a>='a'&&a<='z')
	{
		cout<<a<<" is lower case"<<endl;
	} 
	else if(a>='A'&&a<='Z')
	{
		cout<<a<<" is uppercase"<<endl; 
	}
	else{
		cout<<a<<" it is numeric"<<endl;
	}

}
