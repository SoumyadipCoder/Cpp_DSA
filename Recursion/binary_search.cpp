#include<iostream>
using namespace std;
/*Question:-
	binary search by recursion
*/

void binary_search(int *arr,int target ,int end,int start){
	int mid=(start+end)/2;
	if(arr[mid]==target){
		cout<<"Target is found";
		return ;
	}
	if(end<start){
		cout<<"Target isnot found";
		return ;
	}
	if(arr[mid]>target){
		return binary_search(arr,target,mid-1,start);
	}
	if(arr[mid]<target){
		start=mid;
		return binary_search(arr,target,end,mid+1);
	}
}

int main(){
	int arr[]={1,5,7,8,11,12,40,60};
	int size=(sizeof(arr))/(sizeof(arr[0]));
	int target;
	cout<<"Enter target:-";
	cin>>target;
	binary_search(arr,target,size-1,0);

}