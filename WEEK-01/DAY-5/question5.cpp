// Q5 — Count Consonants

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] !='a' && s[i] !='e' && s[i] !='i' && s[i] !='o' && s[i] !='u'){
            count++;
        }
    }
    cout<<"Total consonats are "<<count;
    return 0;
}