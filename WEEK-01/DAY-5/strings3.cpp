#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    char target;
    int count = 0;

    cout << "Enter a string: ";
    cin >> s;

    cout << "Enter character to search: ";
    cin >> target;

    for(int i = 0; i < s.length(); i++) {

        if(s[i] == target) {
            count++;
        }
    }

    cout << "Character appears " << count << " times.";

    return 0;
}