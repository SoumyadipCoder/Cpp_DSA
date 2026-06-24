#include<iostream>
using namespace std;
#include <iterator>
#include <cstring>

bool palindrome(char arr[]){
	int size=strlen(arr);
	int start=0;
	int end =size-1;
	for(;start<=end;){
		if(arr[start]!=arr[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}



int main(){
	char arr[20];
	cout<<"Enter name:-"<<endl;
	cin>>arr;

	cout<<"Arrar is palindrome or not:-"<<palindrome(arr);
	return 0;
}