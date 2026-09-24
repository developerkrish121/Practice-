// Q3 — Modify Using Pointer

#include<iostream>
using namespace std;
void change(int *ptr){
   *ptr = 100;
}
int main(){
    int n;
    cin>>n;

    change(&n);
    cout<<n;

}