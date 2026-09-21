// sum of digits of a number

#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    if(n==0){
        return 0;
    }
    while(n!=0){
        int digit = n%10;
        sum += digit;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<"Sum of digits "<<sumOfDigits(n);
    return 0;
}