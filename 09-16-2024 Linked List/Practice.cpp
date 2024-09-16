#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
}*Head = NULL, * Last = NULL;

struct ListNode* Memory(int data) {
    struct ListNode* List = (struct ListNode*)malloc(1 * sizeof(struct ListNode));

    if (List == NULL) {
        cout << "Meory Is Not Allocated";
        exit(1);
    }

    else {

    }
}