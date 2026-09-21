// Question 5 - Square and Cube

#include<iostream>
using namespace std;

int square(int n){
    return n*n;
}
int cube(int n){
    return n*n*n;
}

int main(){
    int n;
    cin>>n;

    cout<<"Square is "<<square(n)<<endl;
    cout<<"Cube is "<<cube(n)<<endl;
}