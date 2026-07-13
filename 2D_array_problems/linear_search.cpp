#include<iostream>
using namespace std ;

int input_element(){
	cout<<"Enter target element:-";
	int target;
	cin>>target;
	return target;
}

void linear_search(int arr[3][4]){
	int target;
	target=input_element();
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]==target){
				cout<<"index of element is :-"<<i<<"*"<<j<<endl;
				break;
			}
		}
	}
}

int main(){
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	linear_search(arr);
	return 0;

}