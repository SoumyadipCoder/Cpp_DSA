#include<iostream>
using namespace std;

void print_arr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;

	}
}


bool linear_search(int element,int arr[],int size){
	for(int i=0; i < size; i++){
		if(arr[i]==element){
			return true;
		}
	}
	return false;
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
	int arr[]={10,20,30,40,15,29,148};
/*
	//linear search
	int element;
	cout<<"Enter search element:-";
	cin>>element;
	bool result=linear_search(element,arr,sizeof(arr)/sizeof(arr[0]));
	if(result== true){
		cout<<"element is present";
	}
	else{
		cout<<"Not present";
	} 
*/

 	//swapint alternates{1,2,3,4,5,6} =>{2,1,4,3,6,5}
 	swap_arr(arr,sizeof(arr)/sizeof(arr[0]));
 	print_arr(arr,sizeof(arr)/sizeof(arr[0]));


	return 0;
}