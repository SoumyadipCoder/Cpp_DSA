#include<iostream>
using namespace std;
#include <iterator>


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

void find_duplicate(int arr[],int size){
	for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
         
            }

        }
    }
}

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
	int arr[]={1,2,5,1,5,10};
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

/* 	//swapint alternates{1,2,3,4,5,6} =>{2,1,4,3,6,5}
 	swap_arr(arr,sizeof(arr)/sizeof(arr[0]));
 	print_arr(arr,sizeof(arr)/sizeof(arr[0]));
*/

//	find_duplicate(arr,sizeof(arr)/sizeof(arr[0]));


/*	int arr1[]={10,30,45,75,12};
	int arr2[]={20,30,10,45};
	intersection(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]),sizeof(arr2)/sizeof(arr2[0]));
*/





	return 0;
}