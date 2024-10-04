#include<iostream>
#define max_size 10
using namespace std;

class Stack {
private:
    int top;
    int Array[max_size];

public:
    Stack() {
        this->top = -1;
    }

    bool Is_Empty() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        }

        return top == -1;
    }

    bool Is_Full() {
        if (top == max_size - 1) {
            cout << "Stack is Full" << endl;
        }


        return top == max_size - 1;
    }

    void Push(int data) {
        if (!Is_Full()) {
            Array[++top] = data;
            cout << "Element " << data << " is Pushed" << endl;
            return;
        }

        cout << "Stack is Full" << endl;
    }

    void Pop() {
        if (!Is_Empty()) {
            cout << "Element " << Array[top--] << " is Popped" << endl;
            return;
        }

        cout << "Stack is Empty" << endl;
    }

    void Peak() {
        if (!Is_Empty()) {
            cout << Array[top] << endl;
        }

        return;
    }

    void Print() {
        if (!Is_Empty()) {
            cout << "Stack Elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << Array[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "Stack is Empty" << endl;
        }

        return;
    }
};

int main()
{
    Stack ob;

    ob.Push(10);
    ob.Push(20);
    ob.Push(30);
    ob.Push(40);
    ob.Push(50);
    ob.Push(60);
    ob.Pop();
    ob.Print();

    return 0;
}


