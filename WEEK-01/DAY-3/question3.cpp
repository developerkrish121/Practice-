// Q3 — Maximum of Two Numbers

#include<iostream>
using namespace std;

int maximum(int a,int b){
    if(a>b){
        return a;
    }else{
        return b ;
    }
}


int main(){
    int a , b;
    cin>>a;
    cin>>b;

    cout<<"Maximum is "<<maximum(a,b);




    return 0;
}