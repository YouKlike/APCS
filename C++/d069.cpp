#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,year;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "a leap year\n";
        else cout << "a normal year\n";
    }
}