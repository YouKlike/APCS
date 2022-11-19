#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int A = 0,B = 0,C = 0;
        int t1[8],t2[8];
        for (int j = 1;j <= 7;j++) cin >> t1[j];
        for (int j = 1;j <= 7;j++) cin >> t2[j];
        
        // A
        if ((t1[2] != t1[4] && t1[2] == t1[6]) && (t2[2] != t2[4] && t2[2] == t2[6])) {
            A = 1;
        }
        else {
            A = 0;
            cout << "A";
        }

        // B
        if ((t1[7] == 1) && (t2[7] == 0)) {
            B = 1;
        }
        else {
            B = 0;
            cout << "B";
        }

        // C
        if ((t1[2] != t2[2]) && (t1[4] != t2[4]) && (t1[6] != t2[6])) {
            C = 1;
        }
        else {
            C = 0;
            cout << "C";
        }
        if (A&B&C) {
            cout << "None";
        }
        cout << "\n";
    }
}