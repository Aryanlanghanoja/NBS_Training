//write a program to check the string is palindrome or not
#include <iostream>
using namespace std;

void pd(int i, char* a) {
    static int j = 0;
    if (a[i] != 0) {
        pd(i + 1, a);
        cout << a[i] << a[j] << endl;
        j++;
    }
}

int main() {

    char a[10] = { "abccba" };
    pd(0, a);
    return 0;
}