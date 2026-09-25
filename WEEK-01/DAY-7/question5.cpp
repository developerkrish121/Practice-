// Reverse Array In-Place

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int *left = arr;
    int *right = arr+4;

    while(left<right){
        int temp = *right;
        *right = *left;
        *left = temp;

        left++;
        right--;
    }

    for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
}