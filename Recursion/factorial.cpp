#include<iostream>
using namespace std;

int fact(int n){
	int answer=1;
	if (n>0){
		answer=n*fact(n-1);
	}
	return answer;
}

int main(){
	int number;
	cout<<"Enter number:-";
	cin>>number;

	cout<<fact(number);

	return 0;
}