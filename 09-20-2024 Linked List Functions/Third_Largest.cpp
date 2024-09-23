#include<bits/stdc++.h>
using namespace std;

int Third_Maximum_of_Array(vector<int> Array) {
    int max = Array[0];
    int smax = Array[0];
    int tmax = Array[0];

    for (int i = 1; i < Array.size(); i++) {
        if (Array[i] > max) {
            tmax = smax;
            smax = max;
            max = Array[i];
        }

        else if (Array[i] > smax) {
            tmax = smax;
            smax = Array[i];
        }

        else if (Array[i] > tmax) {
            tmax = Array[i];
        }

    }

    return tmax;
}

int main() {
    vector<int> Array = { 5, 10, 3, 8, 2, 15 , 4 , 8 ,4 };
    int max_value = Third_Maximum_of_Array(Array);

    cout << "Maximum Element of the Array is " << max_value << endl;
}