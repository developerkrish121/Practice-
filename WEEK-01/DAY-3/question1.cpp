// Q1 — Add Two Numbers

#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"The first number is "<<endl;
    cin>>a;
    cout<<"The second number is "<<endl;
    cin>>b;
    cout<<"The sum is "<<sum(a,b);
    return 0;

}