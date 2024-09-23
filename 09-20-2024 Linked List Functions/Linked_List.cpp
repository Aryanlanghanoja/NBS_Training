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
    struct ListNode* List = memo(data);

    if (head == NULL) {
        head = List;
        last = List;
    }

    else {
        last->next = List;
        last = List; // last = last->next;
    }

    return;
}

void Print() {
    struct ListNode* temp = head;

    while (temp != last) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " -> NULL" << endl;

    return;
}

void Insert_At_Begining(int data) {
    struct ListNode* link = memo(data);
    link->next = head;
    head = link;

    return;
}

void Insert_At_Ending(int data) {
    struct ListNode* link = memo(data);
    struct ListNode* Temp = head;

    while (Temp->next != NULL)
    {
        Temp = Temp->next;
    }
    Temp->next = link;
    last = link;

    return;
}

void Insert_At_Any_Point(int data, int pos) {

    if (pos == 1) {
        Insert_At_Begining(data);
        return;
    }

    struct ListNode* temp = head;
    struct ListNode* link = memo(data);
    pos--;

    while (pos-- > 0 && temp->next != NULL) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        last = link;
        temp->next = last;
    }

    else {
        link->next = temp->next;
        temp->next = link;
    }

    return;
}


void Delete_Head() {
    struct ListNode* temp = head;
    head = head->next;
    delete temp;

    return;
}

void Delete_At_Last() {
    struct ListNode* temp = head;

    while (temp->next != last) {
        temp = temp->next;
    }

    last = temp;
    temp = temp->next;
    delete temp;
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

    Insert_At_Ending(100);
    cout << "After Insert At Ending : ";
    Print();

    Insert_At_Any_Point(98, 1);
    cout << "After Insert At Position 1 : ";
    Print();

    Delete_Head();
    cout << "After Deleting the Head :- ";
    Print();

    Delete_At_Last();
    cout << "After Deleting at Last :- ";
    Print();


    return 0;
}