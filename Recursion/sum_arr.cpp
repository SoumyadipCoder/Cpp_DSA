#include<iostream>
using namespace std;

/*  Question:-
		Sum of all elements in given array
*/

int sum_arr(int *arr,int size,int sum){
	if(size<0){
		return sum;
	}
	sum=sum+arr[size];
	return sum_arr(arr,size-1,sum);
}

int input_arr(){
	int size;
	cout<<"Enter size of arr:-";
	cin>>size;
	int arr[size];
	cout<<"Enter Elements:-";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	return sum_arr(arr,size-1,0);
}

int main(){
	cout<<"Sum of all elements is;-"<<input_arr();
	return 0;
}