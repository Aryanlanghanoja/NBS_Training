#include<iostream>
#include<cstdlib>
using namespace std;

struct ABC
{
    int a;
    int b;
};

int main() {
    // ab = (struct ABC*)malloc(1 * sizeof(int));
    // ab = (struct ABC*)calloc(1 , sizeof(int));
    struct ABC* ab = new struct ABC();
    ab->a = 5;
    cout << ab << endl;
    cout << ab->a << endl;
    return 0;
}