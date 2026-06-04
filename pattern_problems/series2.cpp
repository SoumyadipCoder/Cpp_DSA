#include<iostream>
using namespace std ;


int main(){

/*
    1 2 3 ...n
    n+1 n+2 ...2n
    2n+1 2n+2 ...3n
    ..
    ..
*/

	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	int a=1;
	int b=n;
	for(int i=1;i<=n;i++){
		for(int j=a; j<=b;j++){
			cout<<j <<'\t';
		}
		cout<<endl;
		a=a+n;
		b=b+n;
	}
	return 0;
}
