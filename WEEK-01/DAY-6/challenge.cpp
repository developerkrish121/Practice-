// Q11 — Reverse Array Using Two PointerS

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int *left = arr;
    int *right = arr+5;

    while(left<right){
        int temp = *left;
     *left = *right;
        *right = temp;

        left++;
        right--;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}