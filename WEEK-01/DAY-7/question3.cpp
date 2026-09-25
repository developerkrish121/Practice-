// Q3: Array Basics

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int maximum = arr[0];
    int minimum = arr[0];
    int sum = 0;

    for(int i = 0; i < 5; i++) {

    if(arr[i] > maximum) {
        maximum = arr[i];
    }

    if(arr[i] < minimum) {
        minimum = arr[i];
    }

    sum = sum + arr[i];
}

    return 0;
}