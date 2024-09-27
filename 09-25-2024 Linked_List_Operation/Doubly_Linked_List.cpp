#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    struct ListNode* prev;
    struct ListNode* next;
}*head = NULL, * last = NULL;

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
        List->prev = NULL;
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
        // last->next = List;
        // last->prev = last;
        // last = List; // last = last->next;

        last->next = List;
        List->prev = last;
        last = List;
    }

    return;
}

void Print() {

    struct ListNode* temp = head;

    while (temp->next != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << temp->data << " <-> NULL" << endl;

    // while (temp != NULL) {
    //     cout << temp->data << " <-> ";
    //     temp = temp->prev;
    // }
    // cout << "NULL <-> ";

    return;
}

void Print_Reverse() {
    struct ListNode* temp = last;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL";

    return;
}

void Insert_At_Begining(int data) {
    struct ListNode* link = memo(data);
    link->next = head;
    head->prev = link;
    head = link;

    return;
}

void Insert_At_End(int data) {
    if (head == NULL) {
        Insert_At_Begining(data);
    }

    else {
        struct ListNode* link = memo(data);
        last->next = link;
        link->prev = last;
        last = link;
        return;
    }
}

void Insert_At_Any_Point(int position, int data) {
    if (position == 1) {
        Insert_At_Begining(data);
        return;
    }

    struct ListNode* temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    struct ListNode* newNode = memo(data);
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void Delete_First_Node() {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    ListNode* toDelete = head;
    head = head->next;
    head->prev = NULL;
    delete toDelete;
    return;
}

void Delete_Last_Node() {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    ListNode* temp = head;
    while (temp->next!= last) {
        temp = temp->next;
    }
}

void Delete_Any_Node(int data, int position) {}

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

    cout << "Printing the Reverse of the Linked List :- ";
    Print_Reverse();

    Delete_First_Node();
    cout << "After Deleting the Head :- ";
    Print();

    
}
