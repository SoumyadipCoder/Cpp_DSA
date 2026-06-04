#include<iostream>
using namespace std ;


int main(){
	
/*	A
	BB
	CCC...
*/
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
	return 0;
}