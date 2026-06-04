#include<iostream>
using namespace std;
#include <iterator>

void print_arr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;

	}
}
void swap_arr(int arr[],int size){
	int a;
	for(int i=1;i<size;i=i+2){
		a=arr[i];
		arr[i]=arr[i-1];
		arr[i-1]=a;
	}
}

int main(){
	int arr[]={1,2,5,1,5,10};

 	//swapint alternates{1,2,3,4,5,6} =>{2,1,4,3,6,5}
 	swap_arr(arr,sizeof(arr)/sizeof(arr[0]));
 	print_arr(arr,sizeof(arr)/sizeof(arr[0]));
 	return 0;
 }
