#include<iostream>     

// There are two types of header files:-
// 1. System Header Files - It comes with the compiler
// 2. User Defined Header Files - It is written by the programmer
using namespace std;

int main(){
    int a = 4, b= 2;
    cout<<"Operators in C++";
    cout<<"Folowing are the different operators in C++";

    //Arithematic Operators 
    cout<<"The value of a+b is\n" << a+b << endl;
    cout<<"The value of a-b is\n" << a-b << endl;
    cout<<"The value of a*b is\n" << a*b << endl;
    cout<<"The value of a/b is\n" << a/b << endl;
    cout<<"The value of a%b is\n" << a%b << endl;
    cout<<"The value of a++ is\n" << a++ << endl;
    cout<<"The value of a-- is\n" << a-- << endl;

    //Assignment Opertors - used to assign values
    // int a = 3, b= 9;
    // char d = 'd';

    // Comparison Operators
    cout<<"The value of a==b is" << (a==b) << endl;
    cout<<"The value of a<b is" << (a<b) << endl;
    cout<<"The value of a>b is" << (a>b) << endl;
    cout<<"The value of a<=b is" << (a<=b) << endl;
    cout<<"The value of a>=b is" << (a>=b) << endl;
    cout<<"The value of a!=b is" << (a!=b) << endl;

    //Logical Operators
    cout<<"The value of ((a==b) && (a>b)) is" << ((a==b) && (a>b)) << endl;
    cout<<"The value of ((a==b) || (a>b)) is" << ((a==b) || (a>b)) << endl;
    cout<<"The value of !(a>b) is" << (!(a>b)) << endl;



    return 0;
}