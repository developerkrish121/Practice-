#include <iostream>
#include <string>
using namespace std;

int main() {
    // Check first character

    // string s = "apple";

    // if(s[0] == 'a') {
    //     cout << "First character is a";
    // }

    //Count vovels in a string

    string s;
    int count = 0;

    cout<<"Enter a string "<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    cout<<"Number of vovels "<<count;

    return 0;
}