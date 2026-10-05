#include<iostream>
using namespace std;
/*	Question:-
		Search the target element
*/

bool linear_search(int *arr,int size,int target){
	if(arr[size]==target){
		cout<<"Element is found";
		return 1;
	}
	if(size==0){
		cout<<"Element isnot found";
		return 0;
	}
	return linear_search(arr,size-1,target);
}

int main(){
	int arr[]={1,5,4,8,3,7};
	int size=(sizeof(arr)/sizeof(arr[0]));
	int target;
	cout<<"Enter target:-";
	cin>>target;
	linear_search(arr,size-1,target);
	return 0;
}