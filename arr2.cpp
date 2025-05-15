#include<iostream>
using namespace std;
int main(){
	int a[2][3]=[1,4,5],[4,7,9];
	for(int i=0;i<4;i++){
		for(int j=0;j<i;j++){
				cout<<"a["<<i<<"] : "<<a[i]<<endl;
		}
	
	}
	return 0;
}

