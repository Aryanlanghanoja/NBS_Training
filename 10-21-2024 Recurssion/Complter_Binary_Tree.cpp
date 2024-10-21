#include <bits/stdc++.h>
#define Max 15
using namespace std;

int myArray[Max], index = 0;

// void Initialize() {
//     for (int i = 0; i < Max; i++) {
//         myArray[i] = -1;
//     }
// }

void Insert(int data) {

    if (index == Max - 1) {
        cout << "Tree Is Full " << endl;
        return;
    }

    myArray[index++] = data;
}

void Print() {
    for (int i = 0; i < index; i++) {
        if (i < index) {
            cout << "Root Node :- " << myArray[i] << " ";

            int j = 2 * i;
            if ((j + 1) < Max && myArray[j + 1] != -1) {
                cout << "Left Child Is :- " << myArray[j + 1] << " ";
            }

            if ((j + 2) < Max && myArray[j + 2] != -1) {
                cout << "Right Child Is :- " << myArray[j + 2] << " ";
            }

            cout << endl;

        }

        else {
            cout << "_ " << endl;
        }
    }
}

int main() {
    // Initialize();
    Insert(7);
    Insert(11);
    Insert(2);
    Insert(7);
    Insert(1);
    Insert(11);
    Insert(9);
    Insert(7);
    Insert(9);
    Print();
    return 0;
}
