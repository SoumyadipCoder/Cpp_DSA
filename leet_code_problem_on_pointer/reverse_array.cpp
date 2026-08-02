#include<iostream>
using namespace std;

void print_arr(int arr[],int size){
	int i=0;
	while(i<size){
		cout<<arr[i];
		i++;
	}
}
void reverse_arr(int *arr,int size){
	int *start=arr;
	int *end=&arr[size-1];
	for(;start<=end;){
		swap(*start,*end);
		start++;
		end--;
	}
}

int main(){
	int even_arr[]={1,2,3,4,5,6};
	int odd_arr[]={1,2,3,4,5};

	reverse_arr(even_arr,sizeof(even_arr)/sizeof(even_arr[0]));
	print_arr(even_arr, sizeof(even_arr)/sizeof(even_arr[0]));


	return 0;
}