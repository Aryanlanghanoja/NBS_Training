#include<stdio.h>

struct Marks
{
    int marks[10];
};

int main() {
    struct Marks obj;
    struct Marks* ptr = &obj;

    for (int i = 0; i < 10; i++) {
        printf("Enter Mark - %d :- ", i + 1);
        scanf("%d", &ptr->marks[i]);
    }

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        printf("Mark - %d :- %d\n", i + 1, ptr->marks[i]);
        sum += ptr->marks[i];
    }

    printf("Total Marks is :- %d", sum);
    return 0;
}