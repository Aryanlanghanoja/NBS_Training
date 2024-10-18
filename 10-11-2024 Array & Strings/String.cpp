#include <bits/stdc++.h>
using namespace std;

char* function_1() {
    static char string[30] = { "Aryan Langhanoja" };
    return string;
}

int main() {
    cout << function_1() << endl;
    return 0;
}
