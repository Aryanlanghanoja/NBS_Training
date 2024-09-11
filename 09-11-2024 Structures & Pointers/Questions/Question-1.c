#include<stdio.h>

int main() {
    int num;

    printf("Enter The Number :- ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The Number %d Is Even.", num);
    }

    else {
        printf("The Number %d Is Odd.", num);
    }
}