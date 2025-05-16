//uniqe no of occurence in array
#include<stdio.h>
#include<iostream>
using namespace std;

unique_element(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	
	cout<<"unique no of occurence:"<<ans<<endl;
	
}
int print_arr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int arr[7]={1,1,2,5,5,6,6};
	
	cout<<"orignal array"<<endl;
	print_arr(arr,7);
	cout<<endl;
	unique_element(arr,7);	
	return 0;
}

