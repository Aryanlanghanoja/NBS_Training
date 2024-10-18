#include<bits/stdc++.h>
using namespace std;

// int Function(int a[]) {
//     a[2] = 7;
// }

// int main() {
//     int arr[3] = {1, 2, 3};
//     Function(arr);
//     cout << arr[2]; // Output: 7
//     return 0;
// }

int* Function() {
    static int arr[5] = { 1, 2, 3 , 4 , 5 };
    return arr;
}

int main() {
    cout << Function()[2]; // Output: 3
    return 0;
}