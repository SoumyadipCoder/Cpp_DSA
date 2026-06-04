#include<iostream>
using namespace std;

int main(){

//if_else condition 

	double n;
	cout<<"Enter your bugget:-";
	cin>>n;
	if(n<50){
		cout<<"Eat biscits.";
	}
	else if(50<=n<=100){
		cout<<"Eat Roll.";	
	}
	else{
		cout<<"Eat MOMO.";
	}
	return 0;
}