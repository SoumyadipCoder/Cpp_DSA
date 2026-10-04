#include<iostream>
using namespace std;

/* Question:-
      return digits of the input number
*/
void print_digits(int *arr,int i){
      if(i<0){
            return ;
      }
      cout<<arr[i]<<endl;
      print_digits(arr,i-1);
}

void return_digit(int *arr,int number,int i){
      if (number==0){
            print_digits(arr,i-1);
            return ;
      }
      arr[i]=number%10;
      return_digit(arr,number/10,i+1);
}

int main(){
      int number;
      cout<<"Enter a integer number:-";
      cin>>number;

      cout<<"Digits are:-"<<endl;
      int arr[100];
      if(number==0){
            arr[0]=number;
      }
      else{
            return_digit(arr,number,0);
      }
      return 0;
}