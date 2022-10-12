#include<bits/stdc++.h>
using namespace std;
int main () {
    int year = 1;
    while (cin >> year) {
        if (year == 0) break;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "a leap year\n";
        else cout << "a normal year\n";
    }
}