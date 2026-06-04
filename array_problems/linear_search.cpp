#include<iostream>
using namespace std;
#include <iterator>

bool linear_search(int element,int arr[],int size){
	for(int i=0; i < size; i++){
		if(arr[i]==element){
			return true;
		}
	}
	return false;
}

int main(){
	int arr[]={1,2,5,1,5,10};
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
	return 0;
}