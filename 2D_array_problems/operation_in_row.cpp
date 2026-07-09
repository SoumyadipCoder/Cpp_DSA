#include<iostream>
using namespace std;

void row_wiseSum(int arr[4][3]){
	int sum=0;
	cout<<"Result is :-";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			sum=sum+arr[i][j];
		}
		cout<<sum<<endl;
	}	
}

int large_row_sum(int arr0[4][3]){
	int sum=0;
	int arr1[4];
	cout<<"Result is :-";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			sum=sum+arr0[i][j];
		}
		arr1[i]=sum;
	}
	//large sum check
	int big;
	for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){
		if(arr1[i]>arr1[i+1]){
			big=arr1[i];
		}
		if(arr1[i]<arr1[i+1]){
			big=arr1[i+1];
		}
	}
	return big;
}

int main(){

	int arr[4][3];
 	//input

	cout<<"Enter elements:-";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	//row wise sum
	//row_wiseSum(arr);

	//large_row_sum
	cout<<"Large row sum is"<<large_row_sum(arr);

	return 0;
}