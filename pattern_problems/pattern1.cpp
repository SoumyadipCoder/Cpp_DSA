#include<iostream>
using namespace std ;


int main(){

/*	ABC...
	BCD...
	CDE...
	..
	..
*/
	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	char a=65;
	for(int i=1;i<n;i++){
		for(int j=65;j<=65+n;j++){
			cout<<a;
			a++;
		}
		a=65+i;
		cout<<endl;
	}
	return 0;
}
