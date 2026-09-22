// Q3 — Maximum Element

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    int i;
    cin>>n;
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int maximum = arr[0];

for(int i = 1; i < n; i++) {
    if(arr[i] > maximum) {
        maximum = arr[i];
    }
}
cout<<maximum;
return 0;
}