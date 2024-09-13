#include<iostream>
using namespace std;

struct abc {
    int a;
    int b;
}*ab;
int main() {
    ab->a = 5;
    cout << ab->a;
    return 0;
}