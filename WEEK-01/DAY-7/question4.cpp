#include<iostream>
using namespace std;

int main(){

    int arr[6] = {10, 5, 20, 8, 20, 15};

    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 0; i < 6; i++){

        if(arr[i] > largest){

            secondLargest = largest;
            largest = arr[i];

        }
        else if(arr[i] > secondLargest && arr[i] != largest){

            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest;

    return 0;
}