// 1. Print Your Details
// Take input for:

// Name
// Age
// College name
// Print them in a formatted way.

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name, college;
//     int age;

//     cout << "Enter your name: ";
//     cin >> name;

//     cout << "Enter your age: ";
//     cin >> age;

//     cout << "Enter your college: ";
//     cin >> college;

//     cout << "\nName: " << name << endl;
//     cout << "Age: " << age << endl;
//     cout << "College: " << college << endl;

//     return 0;
// }



// 2. Two Number Calculator

// #include<iostream>
// using namespace std;

// int main(){
//     int a , b;
//     cin>>a>>b;
//     cout<<"The sum is "<< a+b << endl;
//     cout<<"The subtraction is "<< a-b << endl;
//     cout<<"The multiplication is "<< a*b << endl;
//     cout<<"The remiander is "<< a%b << endl;
//     cout<<"The division is "<< a/b << endl;
//     return 0;

// }

// 3. Simple Intrest
// #include <iostream>
// using namespace std;

// int main() {
//     double P, R, T;

//     cin >> P >> R >> T;

//     double SI = (P * R * T) / 100;
//     double amount = P + SI;

//     cout << "Simple Interest = " << SI << endl;
//     cout << "Total Amount = " << amount << endl;

//     return 0;
// }

// 4. swap two numbers without using third variable
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}