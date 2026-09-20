// Q3. Largest of Two

// Input two integers and print the larger number.

#include<iostream>
using namespace std;

int main(){
    int number1, number2;
    cout<<"Enter number 1:"<<endl;
    cin>>number1;
    cout<<"Enter number 2:"<<endl;
    cin>>number2;
    if(number1>number2){
        cout<<number1;
    }else if(number1<number2){
        cout<<number2;
    }else{
        cout<<"equal";
    }

    return 0;
}