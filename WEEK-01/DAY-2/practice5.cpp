// Find if a year is a leap year or not

#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        cout<<"Yes leap year"<<endl;
    }else{
        cout<<"Not a leap year" << endl;
    }
    return 0;
}