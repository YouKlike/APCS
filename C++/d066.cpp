#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;

    if (a >= 8 && a < 17) {
        cout << "At School";
    } else if (a == 7 && b >= 30) {
        cout << "At School";
    } else {
        cout << "Off School";
    }   
}