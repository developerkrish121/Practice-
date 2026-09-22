// Q8 — Count Spaces

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a sentence "<<endl;
    getline(cin, s);

    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            count++;
        }
    }
    cout<<"Total blank spaces "<<count;
    return 0;
}