 #include<iostream>
using namespace std;

int prime_cheak(int number){
	for(int i=2;i<number;i++){
		if(number%i==0){
			cout<<"Number is not prime.";
			return 0;
		}
	}
	cout<<"Number is prime";
	return 0;
}

int main(){
	int number;
	cout<<"Enter number:-";
	cin>>number;

	prime_cheak(number);

}