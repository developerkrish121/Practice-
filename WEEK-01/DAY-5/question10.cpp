// Q10 — Character Frequency 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
    int frequency[26] = {0};

    for(int i=0;i<s.length();i++){
        frequency[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++) {

        if(frequency[i] > 0) {
            cout << char(i + 'a') << " = " << frequency[i] << endl;
                 
        }
    }
    return 0;
}