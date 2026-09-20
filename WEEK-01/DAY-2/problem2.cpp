// Q2. Even or Odd

// Input an integer and determine whether it is even or odd.

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    if(number %2 == 0){
        cout<<"The number is even"<<endl;
    }else{
        cout<<"The numnber is odd" << endl;
    }
}