#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode* next;
} *head = NULL, * last = NULL;

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
    // struct ListNode* List = memo(data);

    if (head == NULL) {
        struct ListNode* List = memo(0);
        head = List;
        last = List;

        return;
    }

    struct ListNode* List = memo(data);
    last->next = List;
    last = List; // last = last->next;
    head->data = head->data + 1;
    return;
}

void Print() {
    struct ListNode* temp = head->next;

    while (temp->next != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " -> NULL\t";
    cout << "Size of The Linked List Is " << head->data << endl;

    return;
}

void Insert_At_Begining(int data) {
    if (head == nullptr) {
        Create(data);
        return;
    }

    struct ListNode* newNode = memo(data);
    newNode->next = head->next;
    head->next = newNode;
    head->data = head->data + 1;
    return;
}

int main() {

    vector<int> Data = { 89,76,43,32,90,87,21,56,98 };

    for (int i = 0; i < Data.size(); i++) {
        Create(Data[i]);
    }

    cout << "Original Linked List: ";
    Print();

    Insert_At_Begining(10);
    cout << "After Insert At Begining : ";
    Print();

} 