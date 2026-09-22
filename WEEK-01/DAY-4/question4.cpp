// Find minimum elemnt

#include<iostream>
using namespace std;

int main(){
    int arr[200];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int minimum = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    cout<<minimum;
    return 0;
}