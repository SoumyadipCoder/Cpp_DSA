#include<iostream>
using namespace std ;



int main(){

	int arr[3][4];
	//input
	cout<<"Enter elements:-";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cin>>arr[j][i];
		}
	}

	//wave print
	cout<<"Output is:-"<<endl;
	int j=0;
	for(int i=0;i<4;i=i+2){
		for(;j<3;j++){
			cout<<arr[j][i];
			cout<<" ";
		}
		
		cout<<endl;
		j=2;
		for(;j>=0;j--){
			cout<<arr[j][i+1];
			cout<<" ";
		}
		j++;
		cout<<endl;

	}


	return 0;
}