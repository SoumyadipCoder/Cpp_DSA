#include<iostream>
using namespace std ;


int main(){

/*	D
	CD
	BCD
	ABCD...
*/
	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	char a=64;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=i;j--){
			char b=a+n;
			cout<<b;
		}
		a--;
		cout<<endl;
	}
	return 0;
}