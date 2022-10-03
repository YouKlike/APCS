#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    while (cin >> n >> k) {
        if (n != 0 && k == 0) {
            cout << "Impossib1e!" << "\n";
            continue;
        } else if (n == 0 && k == 0) {
            cout << "Ok!" << "\n";
            continue;
        } 
        if (n % k == 0) cout << "Ok!" << "\n";
        else if (n % k != 0) cout << "Impossib1e!" << "\n";
    }
}