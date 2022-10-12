#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,year;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "Case " << i+1 << ": a leap year\n";
        else cout << "Case " << i+1 << ": a normal year\n";
    }
}