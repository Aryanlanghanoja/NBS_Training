#include<bits/stdc++.h>
using namespace std;

int main() {
    int operand_1;
    int operand_2;
    char operation;

    cout << "Enter the Expression :- " << endl;

    cin >> operand_1;
    cin >> operation;

    while (operation != '?') {
        cin >> operand_2;

        if (operation == '+') {
            operand_1 += operand_2;
        }

        else if (operation == '-') {
            operand_1 -= operand_2;
        }

        else if (operation == '*') {
            operand_1 *= operand_2;
        }

        else if (operation == '/') {
            operand_1 /= operand_2;
        }

        else {
            break;
        }

        cin >> operation;

        if (operation != '+' || operation != '-' || operation != '*' || operation != '/') {
            break;
        }
    }

    cout << "The Answer Is " << operand_1 << endl;
}