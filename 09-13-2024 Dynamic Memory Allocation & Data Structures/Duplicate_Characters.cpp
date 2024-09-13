#include<bits/stdc++.h>
using namespace std;

int main() {

    string input = "ADEcdmdjfoijkaKEIFOEPIWPLEDLMLLWJckldkdsccdcd";
    vector<int> Map(26, 0);

    for (int i = 0; i < input.size(); i++) {

        int ascii_value = int(input[i]);

        if (ascii_value >= 65 && ascii_value < 97) {
            Map[ascii_value - 65]++;
        }

        else {
            Map[ascii_value - 97]++;
        }
    }

    int count = 0;

    for (int i = 0; i < Map.size(); i++) {
        if (Map[i] >= 2) {
            count++;
        }
    }

    cout << "No. of Duplicate Characters are " << count << endl;

    return 0;
}