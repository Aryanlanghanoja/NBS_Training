// #include <bits/stdc++.h>
// using namespace std;

// class ListNode {
// public:
//     int data;
//     ListNode* next;

//     ListNode(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// class Stack {
// private:
//     ListNode* Top;

// public:

//     Stack() {
//         Top = nullptr;
//     }

//     void Push(int data) {
//         ListNode* newNode = new ListNode(data);

//         if (newNode == nullptr) {
//             cout << "Memory Not Found." << endl;
//             return;
//         }

//         newNode->next = Top;
//         Top = newNode;
//         cout << newNode->data << " Is Pushed on Stack." << endl;
//         return;
//     }

//     void Pop() {
//         if (Top == nullptr) {
//             cout << "Stack is Empty." << endl;
//             return;
//         }

//         ListNode* temp = Top;
//         Top = Top->next;
//         cout << temp->data << " Is Popped from Stack." << endl;
//         delete temp;
//         return;
//     }

//     bool Is_Empty() {

//         bool ans = Top == nullptr;

//         if (ans) {
//             cout << "Stack Is Empty" << endl;
//         }

//         return ans;
//     }

//     void Get_Top() {
//         if (Is_Empty()) {
//             cout << "Stack is Empty." << endl;
//             return;
//         }

//         cout << "Data at the Top of the Stack is " << Top->data << endl;
//         return;
//     }

//     void Print() {
//         ListNode* temp = Top;

//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }

//         cout << "NULL" << endl;

//         return;
//     }
// };

// int main() {

//     vector<int> Data = { 12,24,56,89,57,25,41,49,50};
//     Stack stack;

//     stack.Pop();
//     stack.Get_Top();

//     for (int data : Data) {
//         stack.Push(data);
//     }

//     stack.Print();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
private:
    ListNode* Top;

public:

    Stack() {
        Top = nullptr;
    }

    void Push(int data) {
        ListNode* newNode = new ListNode(data);

        if (newNode == nullptr) {
            cout << "Memory Not Found." << endl;
            return;
        }

        newNode->next = Top;
        Top = newNode;
        cout << newNode->data << " Is Pushed on Stack." << endl;
        return;
    }

    void Pop() {
        if (Top == nullptr) {
            cout << "Stack is Empty." << endl;
            return;
        }

        ListNode* temp = Top;
        Top = Top->next;
        cout << temp->data << " Is Popped from Stack." << endl;
        delete temp;
        return;
    }

    bool Is_Empty() {
        return Top == nullptr;
    }

    void Get_Top() {
        if (Is_Empty()) {
            cout << "Stack is Empty." << endl;
            return;
        }

        cout << "Data at the Top of the Stack is " << Top->data << endl;
        return;
    }

    void Print() {
        ListNode* temp = Top;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;

        return;
    }
};

int main() {

    vector<int> Data = { 12,24,56,89,57,25,41,49,50 };
    Stack stack;

    stack.Pop();
    stack.Get_Top();

    for (int data : Data) {
        stack.Push(data);
    }

    stack.Print();
    return 0;
}
