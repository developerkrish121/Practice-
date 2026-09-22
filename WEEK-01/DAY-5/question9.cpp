// Q9 — Count a Particular Character

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
    int count = 0;
    char target;
    cout<<"Enter a character "<<endl;
    cin>>target;
    for(int i=0;i<s.length();i++){
        if(s[i] == target){
            count++;

        }
    }
    cout<<"Particular charcter count is "<<count;
    return 0;
}