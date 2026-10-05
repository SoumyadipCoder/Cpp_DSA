#include<iostream>
using namespace std;

/* Question:-
	Find if given array is sorted(assending) or not ,using recursion
*/

bool check_arr_sort(int *arr,int size,int i){
	if(i==size){
		return true;
	}
	if(arr[i]<arr[i-1]){
		return false;
	}
	return check_arr_sort(arr,size,i+1);
}

void print_result(int *arr,int size){
	int a=check_arr_sort(arr,size,1);	
	if(a==1){
		cout<<"Array is sorted";
	}
	else{
		cout<<"Array isnot sorted";
	}
}

int main(){
	int size;
	cout<<"Enter no of elements:-";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" element:-"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	print_result(arr,size);

	return 0;
}