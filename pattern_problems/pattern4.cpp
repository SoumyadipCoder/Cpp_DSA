#include<iostream>
using namespace std ;


int main(){

/*	11111
	 2222
	  333
	   44
	    5...
*/
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
	return 0;

}