#include<stdio.h>

int main() {
    int a = 6, * b, ** c;
    c = &b;
    b = &a;

    printf("%X", **c);

}