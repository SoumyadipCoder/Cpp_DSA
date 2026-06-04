#include<iostream>
using namespace std ;


int main(){

/*
	123...n
	123...n
	..
	..
*/

	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1; j<=n;j++){
			cout<<j ;
		}
		cout<<endl;
	}
	return 0;
}

