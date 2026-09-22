// Q6 — Search an Element

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool found  = false;
    for(int i = 0;i<n;i++){
        if(arr[i] == target){
            found = true;
        }
    }
    if(found) {
    cout << "Found";
} else {
    cout << "Not Found";
} 
return 0;
}