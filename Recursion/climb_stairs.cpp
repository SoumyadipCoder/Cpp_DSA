#include<iostream>
using namespace std;

//Question:-

/*You have been given a number of stairs. Initially, you are at the 0th 
stair,and you need to reach the Nth stair.Each time you can either climb 
one step or two steps.You are supposed to return the number of distinct
ways in which you can climb from the 0th step to Nth step
 */

int count_stair(int number){
	if(number==0){
		return 1;
	}
	if(number<0){
		return 0;
	}
	int ans=count_stair(number-1)+count_stair(number-2);
	return ans;
}


int main(){
	int number;
	cout<<"Enter no of stairs:-";
	cin>>number;
	cout<<"number of distinct ways"<<count_stair(number);
}
