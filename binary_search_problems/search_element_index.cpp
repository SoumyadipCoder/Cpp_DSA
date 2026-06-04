#include<iostream>
using namespace std;

int input(){
	int search_el;
	cout<<"Enter the search element:-";
	cin>>search_el;
	return search_el;
}
int binary_search(int arr[],int size){
	int element=input();
	int start =0;
	int end=size-1;
	int mid;
	for(;start<=end;){
		mid=(start+end)/2;
		if(arr[mid]==element){
			return mid;
		}
		else if(arr[mid]>element){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}

int main(){

	int even_arr[]={10,20,20,25,60,75,75,100};
	int odd_arr[]={1,2,2,3,4,4,5,6,7};

	
	int idex;
	idex=binary_search(even_arr,sizeof(even_arr)/sizeof(odd_arr[0]),search_el);
	idex=binary_search(odd_arr,sizeof(odd_arr)/sizeof(odd_arr[0]),search_el);
	cout<<"Index is => "<<idex<<endl;
	return 0;

}