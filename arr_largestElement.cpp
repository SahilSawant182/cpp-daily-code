//Largest no in array
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int arr[5]={1,4,2,56,9};
	cout<<"orignal array"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
int max=arr[0];
for(int i=1;i<=5;i++){
	if(arr[i]>max){
		max=arr[i];
	}
}
cout<<"maximum element="<<max;
return 0;
}
