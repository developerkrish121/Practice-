// Pointers and arrays

#include<iostream>
using namespace std;

int main(){
    int marks[4] = {2,3,4,5};
    int * p =marks;
    // cout<<*p++;
    // cout<<*++p;
    cout<<"The value of matks is "<<*p<<endl;
    cout<<"The value of matks is "<<*(p+1)<<endl;
    cout<<"The value of matks is "<<*(p+2)<<endl;
    cout<<"The value of matks is "<<*(p+3)<<endl;
}