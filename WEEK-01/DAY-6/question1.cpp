// Q1 — Modify Original Variable

#include<iostream>
using namespace std;

void change(int &b){
 b = 100;
}
int main(){
    int a;
    cin>>a;
     
    change(a);

    cout<<a;

return 0;

}