#include<bits/stdc++.h>
using namespace std;

int main() {
    int year;

    cout << "Enter The Year :- ";
    cin >> year;

    year--;

    int idx = (year + (year / 4)) % 7;

    string days[7] = { "Sunday" ,"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" };

    cout << "At 1st Januarty " << year + 1 << " , There Is a " << days[idx] << endl;

    return 0;
}