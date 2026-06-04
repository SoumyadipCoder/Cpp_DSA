#include<iostream>
using namespace std;
#include <iterator>

void intersection(int arr1[],int arr2[],int size1,int size2){
	cout<<"Intersect elements are:-";
	for(int i=0;i<size1;i++){
		for(int j=0;j<size2;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
			}
		}
	}
}


int main(){
	int arr1[]={10,30,45,75,12};
	int arr2[]={20,30,10,45};
	intersection(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]),sizeof(arr2)/sizeof(arr2[0]));
	return 0;
}