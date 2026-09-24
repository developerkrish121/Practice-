// #include <iostream>
// using namespace std;

// int main() {

//     int x = 10;
//     int *ptr = &x;

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Value stored in pointer " << ptr <<endl;
//     cout << *ptr;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {

    int arr[4] = {10, 20, 30, 40};

    int *ptr = arr;

    for(int i = 0; i < 4; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}