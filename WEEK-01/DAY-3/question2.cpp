// Q2 — Even or Odd Function

#include<iostream>
using namespace std;

bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }

}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    if (isEven(n)) {
        cout << "Even";
    } else {
        cout << "Odd";
    }


}