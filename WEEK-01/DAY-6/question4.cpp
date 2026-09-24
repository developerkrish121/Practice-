// Q4 — Find Maximum Using Pointers

#include<iostream>
using namespace std;

int maximum(int *a,int *b){
    if(*a>*b){
        return *a;
    }else{
        return *b;
    }
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;

    cout<< maximum(&a,&b);


    
}