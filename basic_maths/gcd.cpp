#include<iostream>
using namespace std;

int gcd(int Bnumber,int Snumber){
	//gcd(a,b)=gcd(a-b,b)
	
	for(;;){
		if(Bnumber%Snumber==0){
			return Snumber;
		}
		Bnumber=Bnumber-Snumber;
	}
}



int main(){
	int bnum;
	int snum;
	cout<<"Enter 1st number:-";
	cin>>bnum;
	cout<<"Enter 2st number:-";
	cin>>snum;

	//Swap
	if(snum>bnum){
		int a;
		a=snum;
		snum=bnum;
		bnum=a;
	}
	if(snum==0 && bnum==0){
		cout<<"GCD of given numbers is not define.";
	}
	int a=gcd(bnum,snum);
	cout<<"GCD of these numbers is:-"<<a;


	return 0;
}