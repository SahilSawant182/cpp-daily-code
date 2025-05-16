//Reverse array
#include<stdio.h>
#include<iostream>
using namespace std;



int main(){
	
	int arr[6]={1,2,3,4,5,6};
	cout<<"orignal array=";
	for(int i=0;i<6;i++){
		cout<< arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<(6/2);i++){
		swap(arr[i],arr[6-i-1]);
	}
	cout<<endl;
	cout<<"reversed array";
		for(int i=0;i<6;i++){
		cout<< arr[i]<<" ";
	}
	
	
	
}
