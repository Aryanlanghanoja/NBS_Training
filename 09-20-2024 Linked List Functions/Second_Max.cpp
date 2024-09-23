#include<bits/stdc++.h>
using namespace std;

int Second_Maximum_of_Array(vector<int> Array) {
    int max = Array[0];
    int smax = Array[0];

    for (int i = 1; i < Array.size(); i++) {
        if (Array[i] > max) {
            smax = max;
            max = Array[i];
        }

        else if (Array[i] > smax) {
            smax = Array[i];
        }

    }

    return smax;
}

int main() {
    vector<int> Array = { 5, 10, 3, 8, 2, 15 , 4 , 8 ,4 };
    int max_value = Second_Maximum_of_Array(Array);

    cout << "Maximum Element of the Array is " << max_value << endl;
}