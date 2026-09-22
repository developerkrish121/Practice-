// Q5 — Count Even and Odd Numbers

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even = 0;
    int odd = 0;

    for(int i =0;i<n;i++){
        if(arr[i] % 2 ==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Total even numners are "<<even<<endl;
    cout<<"Total odd numners are "<<odd<<endl;
    return 0;
}