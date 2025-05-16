//swap alternet
#include<stdio.h>
#include<iostream>
using namespace std;

int swap_alter(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}
	}
}

int print_arr(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	
	}
	cout<<endl;
}
 
int orignalARR(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	
	}
	cout<<endl;
}

int main(){
	int arr1[7]={1,3,2,5,4,6,7};
	int arr2[8]={1,3,4,5,5,4,3,0};
	
	cout<<"orignal array"<<endl;
	print_arr(arr1,7);
	
    cout<<"alternated  array"<<endl;
	swap_alter(arr1,7);
	print_arr(arr1,7);
	cout<<endl;
	
	cout<<"orignal array"<<endl;
	print_arr(arr2,8);
	cout<<"alternated array"<<endl;
	swap_alter(arr2,8);
	print_arr(arr2,8);
		return 0;
}

