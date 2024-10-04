#include<bits/stdc++.h>
using namespace std;
template <typename p , typename q>

class MyClass {
private:
    p a;
    q b;

public:
    MyClass(p x, q y) {
        cout <<  x + y;
    }
};

int main() { 
    MyClass<int, float> obj(4, 4.5);
    return 0;
}