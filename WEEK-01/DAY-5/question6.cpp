// Q6 — Reverse a String

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter string "<<endl;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
       cout<<s[i]<<endl;
    }
    return 0;
}