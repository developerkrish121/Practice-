// Count Positive  , Negative , zero

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int positive = 0;
    int negative  = 0;
    int zero = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }else{
            zero++;
        }
    }
  cout << "Positive = " << positive << endl;
cout << "Negative = " << negative << endl;
cout << "Zero = " << zero << endl;
    return 0;
}