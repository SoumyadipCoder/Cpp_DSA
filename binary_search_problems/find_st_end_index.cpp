#include<iostream>
using namespace std;

int input(){
	int search_el;
	cout<<"Enter the search element:-";
	cin>>search_el;
	return search_el;
}

int find_st_end_index(int nums[],int size) {
    int target=input();
    int arr[2];
    int start=0;
    int end=size-1;
    int mid;
    for(;end>=start;){
        mid=(start+end)/2;
        if(nums[mid]>target){
            end=mid-1;
        }
        if(nums[mid]<target){
            start=mid+1;
        }
        if(nums[mid]==target){
            if(nums[mid+1]==target){
                cout<<"starting index:"<<mid;
                cout<<";;ending index :"<<mid+1;
                return 0;
            }
            else if(nums[mid-1]==target){
                cout<<"starting index:"<<mid-1;
                cout<<";;ending index :"<<mid;
                return 0;
            }
            else{
                cout<<"starting index:"<<mid;
                cout<<";;ending index :"<<mid;
                return 0;
            }
                       
        }
    } 
    cout<<"Element not present";
    return 0;   
}

int main(){

	int even_arr[]={10,20,20,25,60,75,75,100};
	int odd_arr[]={1,2,2,3,4,4,5,6,7};
	find_st_end_index(even_arr,sizeof(odd_arr)/sizeof(odd_arr[0]));
	return 0;
}