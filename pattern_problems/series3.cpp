#include<iostream>
using namespace std ;


int main(){

/*	
	1
	23
	345
	4567
	56789
	67891011... 
*/
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
	return 0;

}