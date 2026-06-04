#include<iostream>
using namespace std ;


int main(){

/*  1
	21
	321
	4321...
*/
	int n;
	cout<<"Enter a integer number :-";
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){
			cout<<j<<'\t';
		}
		cout<<endl;
	}
	return 0;
}