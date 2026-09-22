// Program to check palindrome

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    bool palindrome = true;

    int start = 0;
    int end = s.length() - 1;

    while(start < end) {

        if(s[start] != s[end]) {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if(palindrome) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}