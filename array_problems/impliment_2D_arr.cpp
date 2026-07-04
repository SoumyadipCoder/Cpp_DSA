#include<iostream>
using namespace std;


int main(){
	int arr[2][3];
//input array
	cout<<"Enter elements:-";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}

//print array
/*	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
*/

	//search index of target element
	int target;
	cout<<"Enter target:-"<<endl;
	cin>>target;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(arr[j][i]==target){
				cout<<"element is present";
			}
		}
	}


	return 0;

}
