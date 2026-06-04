#include<iostream>
using namespace std;

int main(){


//sum of n number
	
	int n;
	cout<<"Enter a integer number:-";
	cin>>n;
	int i=1;
	int sum=0;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"Sum is =>"<<sum<<endl;
	return 0;

}