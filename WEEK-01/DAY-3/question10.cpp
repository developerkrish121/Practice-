// Q10 — Factorial

#include<iostream>
using namespace std;

long long fact(int n){
    long long result = 1;

    for(int i=1;i<=n;i++){
        result = result * i;
    }
    return result;
}


int main(){
    int n;
    cin>>n;
    cout<<"The factorial is "<<fact(n);
}