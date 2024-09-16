#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode* next;
} *head = NULL, *last = NULL;

struct ListNode* memo(int data)
{
    struct ListNode* List = (struct ListNode*)malloc(1 * sizeof(struct ListNode));

    if (List == NULL) {
        cout << "Memory Is Not Found";
        exit(1);
    }

    else {
        List->data = data;
        List->next = NULL;
        return List;
    }
};

void Create(int data) {
    struct ListNode* List = memo(data);

    if (head == NULL) {
        head = List;
        last = List;
    }

    else {
        last->next = List;
        last = List;
    }
}

void Print() {
    struct ListNode* temp = head;

    while (temp != last) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " -> NULL" << endl;
}

int main() {

    // Create(5);
    // Create(10);
    vector<int> Data = { 89,76,43,32,90,87,21,56,98 };

    for (int i = 0; i < Data.size(); i++) {
        Create(Data[i]);
    }
    cout << "Original Linked List: ";
    Print();

    return 0;
}