#include<iostream>
using namespace std;

void count_prime(int number){
	int count=0;
	int i=2;
	while(i<=number){
		int j=2;
		if(i==2){
			count++;
		}
		int a=0;
		while(j<i){
			if(i%j ==0){
				a++;
				break;
			}
			j++;
		}
		if(a==0){
			count++;
		}
		i++;
	}
	cout<<"Total number of prime number less than or equal to"<<number<<" is:-"<<count;
}



int main(){
	int number;
	cout<<"Enter number:-";
	cin>>number;

	count_prime(number);
	return 0;
}