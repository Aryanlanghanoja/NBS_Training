#include <bits/stdc++.h>
#define Max 15
using namespace std;

int myArray[Max];

void Initialize() {
    for (int i = 0; i < Max; i++) {
        myArray[i] = -1;
    }
}

void Insert(int data, int index) {
    myArray[index] = data;
}

void Print() {
    for (int i = 0; i < Max; i++) {
        if (myArray[i] != -1) {
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
    Initialize();
    Insert(7, 0);
    Insert(11, 1);
    Insert(2, 2);
    Insert(7, 3);
    Insert(1, 4);
    Insert(11, 5);
    Insert(9, 6);
    Insert(7, 7);
    Insert(9, 14);
    Print();
    return 0;
}
