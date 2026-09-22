// Challenge — Anagram
// Two strings are anagrams if they contain the same characters with the same frequencies.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    cout<<"Enter first string "<<endl;
    cin>>s1;
    string s2;
    cout<<"Enter second string "<<endl;
    cin>>s2;
    int frequency[26] = {0};

    for(int i=0;i<s1.length();i++){
        frequency[s1[i] - 'a']++;
    }
    for(int i=0;i<s2.length();i++){
        frequency[s2[i] - 'a']--;
    }

    bool isAnagram = true;
    for(int i=0;i<26;i++){
        if(frequency[i] != 0){
            isAnagram = false;
            break;
        }
    }
    if(isAnagram) {
        cout << "Anagram";
    }
    else {
        cout << "Not Anagram";
    }
    return 0;
}