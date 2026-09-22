// Arrays 

#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23,45,6,7};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for(int i=0;i<4;i++){
        cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
    }
    return 0;

}