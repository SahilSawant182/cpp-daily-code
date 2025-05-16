//finding duplicate element (leetcode)
#include<stdio.h>
#include<iostream>
using namespace std;

int duplicate(int arr[], int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	for(int i=1;i<size;i++){
		ans=ans^i;
	}
	cout<<"duplicate element: "<<ans;
	cout<<endl;
	
}


int print_arr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
	
int main(){
	int arr[7]={1,2,3,4,5,4,6};
	
	cout<<"orignal array"<<endl;
	print_arr(arr,7);
	cout<<endl;
	duplicate(arr,7);	
	return 0;
}
