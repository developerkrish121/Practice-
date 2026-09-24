// What is reference

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &ref = a;
    ref = 50;
    cout<<"The value of a is "<<a;
    cout<<"The value of ref is "<<ref;
    return 0;
}