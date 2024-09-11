#include<stdio.h>

struct ABC
{
    int a;
    int b;
};

int main() {

    struct ABC obj;
    struct ABC* ptr = &obj;

    obj.a = 5;
    obj.b = 6;

    printf("%d\n", ptr->a);
    printf("%d\n", ptr->b);
    printf("%X\n", &obj);
    printf("%X", *ptr);

}