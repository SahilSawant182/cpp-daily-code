#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[]={11,33,4,5,54,43,34};
	int n= sizeof(arr) / sizeof(arr[0]);
	int first=INT_MIN ;
	int second=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>first)
		{
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second&&arr[i]!=first)
		{
			second=arr[i];
		}
	}
	cout<<"second largest element="<<second;
	return 0;
} 
