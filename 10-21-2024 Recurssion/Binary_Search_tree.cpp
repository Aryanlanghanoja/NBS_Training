#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define Max 15
using namespace std;

int myArray[Max];

void Initialize() {
    for (int i = 0; i < Max; i++) {
        myArray[i] = -1;
    }
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

void Insert(int data, int index) {
    if (index < Max) {
        if (myArray[index] == -1) {
            myArray[index] = data;
            return;
        }

        if (data < myArray[index]) {
            return Insert(data, 2 * index + 1);
        }

        else {
            return Insert(data, 2 * index + 2);
        }
    }

    else {
        cout << "Tree Is Full." << endl;
    }
}

int main() {

    Initialize();
    Insert(50, 0);
    Insert(30, 0);
    Insert(20, 0);
    Insert(40, 0);
    Insert(60, 0);
    Print();
    return 0;
}