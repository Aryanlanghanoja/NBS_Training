#include<iostream>
using namespace std;

// Definition for a node in the linked list
class ListNode {
public:
    int data;  // Value stored in the node
    ListNode* next;  // Pointer to the next node

    // Constructor to initialize the node with a given value
    ListNode(int data) {
        this->data = data;
        this->next = nullptr;  // Initialize next as null
    }
};

// Stack implementation using a linked list
class Stack {

private:
    ListNode* Top;  // Pointer to the top of the stack
    ListNode* newNode;  // Temporary pointer for creating new nodes

public:
    // Constructor to initialize an empty stack
    Stack() {
        this->Top = nullptr;  // Stack starts as empty
    }

    // Function to push an element onto the stack
    void Push(int data) {
        // Create a new node with the given data
        this->newNode = new ListNode(data);
        // Set the new node's next pointer to the current top of the stack
        this->newNode->next = this->Top;
        // Update the top of the stack to the new node
        this->Top = this->newNode;

        cout << "Element " << newNode->data << " Pushed into Stack" << endl;
    }

    // Function to pop an element from the stack
    void Pop() {
        ListNode* temp = this->Top;  // Store the current top in a temporary pointer
        if (this->Top == nullptr) {  // Check if the stack is empty
            cout << "Stack is Empty" << endl;
            return;
        }
        // Move the top pointer to the next node
        this->Top = this->Top->next;
        cout << "Element " << temp->data << " Popped from Stack" << endl;

        // Delete the popped node to avoid memory leakage
        delete temp;
    }
};
