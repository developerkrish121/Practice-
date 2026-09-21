#include<iostream>
using namespace std;

// Tis will not swap a and b
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

// use of address pointer
void swapPointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x =4, y = 5;
    // cout<<"The sum is " <<sum(a,b);
    cout<<"The value of a and b is "<<x<<y<<endl;
    // swapPointer(&x , &y);
    swapReferenceVar(x,y);
    cout<<"The value of a and b is "<<x<<y<<endl;

    return 0;
}