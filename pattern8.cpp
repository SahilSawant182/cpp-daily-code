#include<iostream>
 using namespace std;
 int main()
 {
 	int n;
 	cin>>n;	
 	int row=1;
    while(row<=n)
	{
    	int col=1;
    	while(col<=n)
		{
    		char ch='a';
    		cout<<'ch'+row-1;
    		col++;
		}
		cout<<endl;   
		row++;
	}
 }
