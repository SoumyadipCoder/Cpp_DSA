#include<iostream>
using namespace std;

void print_arr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
}

int bubble_sort(int arr[],int size){
	for(int i=1;i<size;i++){
		for(int j=0;j<size-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	print_arr(arr,size);

}

int main(){
	int arr[]={10,9,8,7,6,5};
	bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}

