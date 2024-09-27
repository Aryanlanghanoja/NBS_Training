#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        next = nullptr;
    }
};

int fun(int a) {
    if (a > 5) {
        fun(a - 1);
    }

    printf("%d\n", a);
}

int main() {
    // printf("%d", fun(5));

    int a = printf("Aryan");
    printf("%d", a);
}