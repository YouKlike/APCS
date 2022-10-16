#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,t;
    cin >> a >> b;
    while (a % b) {
        t = a % b;
        a = b;
        b = t;
    }
    cout << b;
}