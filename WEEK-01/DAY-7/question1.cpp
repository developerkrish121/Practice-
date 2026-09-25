// Problem 1: Reverse Number + Palindrome

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;

    int original = n;
    int reverse = 0;

    while(n>0){
        int digit = n%10;
        reverse = reverse*10+digit;
        n = n/10;
    }
    cout<<"Reverse = "<<reverse<<endl;

    if(original == reverse){
        cout<<"Palindrome "<<endl;
    }else{
        cout<<"Not a palindrome" << endl;
    }
return 0;
}