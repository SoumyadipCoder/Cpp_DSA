#include<iostream>
using namespace std ;


int main(){

/*
	123...n
	123...n
	..
	..
	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1; j<=n;j++){
			cout<<j ;
		}
		cout<<endl;
	}

*/
/*
    1 2 3 ...n
    n+1 n+2 ...2n
    2n+1 2n+2 ...3n
    ..
    ..

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
*/


/*	
	1
	23
	345
	4567
	56789
	67891011... 

	int n;
	cout<<"Enter a integer number :-";
	cin>>n;

	for(int i=1;i<=n;i++){
		int a=i;
		int b=a;
		for(int j=1;j<=a;j++){
			cout<<b<< '\t';
			b++;

		}
		cout<<endl;
	}
*/


/*  1
	21
	321
	4321...

	int n;
	cout<<"Enter a integer number :-";
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){
			cout<<j<<'\t';
		}
		cout<<endl;
	}
*/

/*	AAA...
	BBB...
	CCC..
	..
	..
	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	char a=65;
	for(int i=1;i<n;i++){
		for(int j=1;j<=n;j++){
			cout<<a;
		}a++;
		cout<<endl;
	}
*/

/*	ABC...
	BCD...
	CDE...
	..
	..
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
*/

/*	A
	BB
	CCC...
	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	char a=65;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<a;
		}
		a++;
		cout<<endl;
	}
*/

/*	D
	CD
	BCD
	ABCD...
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
*/

/*     @
	  @@
     @@@...
 	
 	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-1;j>=i;j--){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<"@";
		}
		cout<<endl;
	}
*/

/*	11111
	 2222
	  333
	   44
	    5...

	int n;
	cout<<"Enter a integer number :-";
	cin>>n;
	int a=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			cout<<" ";
		}
		for(int k=n-i+1;k>=1;k--){
			cout<<a;
		}
		a++;
		cout<<endl;
	}
*/



return 0;

}