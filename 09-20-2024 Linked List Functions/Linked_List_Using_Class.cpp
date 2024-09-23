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

class LinkedList {

private:
    ListNode* head;

public:

    LinkedList() {
        head = nullptr;
    }

    void Create(int data) {

        ListNode* newNode = new ListNode(data);

        if (head == nullptr) {
            head = newNode;

            return;
        }

        else {
            ListNode* temp = head;

            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;

            return;
        }
    }

    void Insert_At_Head(int data) {
        ListNode* newNode = new ListNode(data);
        newNode->next = head;
        head = newNode;
    }

    void Insert_At_tail(int data) {
        if (head == NULL) {
            Insert_At_Head(data);
            return;
        }

        ListNode* temp = head;
        ListNode* newNode = new ListNode(data);

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
};

