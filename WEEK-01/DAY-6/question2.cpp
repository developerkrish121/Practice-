// Q2 — Swap Two Numbers

#include<iostream>
using namespace std;

void swapNumbers(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a , b;
    cin>>a;
    cin>>b;

    swapNumbers(a,b);
    cout<<a<<" "<<b;

}