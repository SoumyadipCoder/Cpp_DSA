#include<iostream>
using namespace std;

int main(){

/*  ***
	**
	*
*/  

	int n;
	cout<<"Enter an int number:-";
	cin>>n;
	for(int j=n;j>=1;j--){
		for(int i=j; i>=1;i--){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}