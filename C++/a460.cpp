#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a >= 60) cout << "399";
    else if (a >= 18 && a < 60) cout << "890";
    else if (a >= 12 && a < 18) cout << "790";
    else if (a >= 6 && a < 12) cout << "590";
    else cout << "0";
}