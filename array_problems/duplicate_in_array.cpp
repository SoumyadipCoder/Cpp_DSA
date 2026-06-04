#include<iostream>
using namespace std;
#include <iterator>

void find_duplicate(int arr[],int size){
	for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
         
            }

        }
    }
}

int main(){
	int arr[]={1,2,5,1,5,10};

	find_duplicate(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}