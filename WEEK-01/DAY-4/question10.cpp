// Q10 — Array Average

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;

for(int i = 0; i < n; i++) {
    sum += arr[i];
}

double average = (double)sum / n;

cout << "Average = " << average;
return 0;

}