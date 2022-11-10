#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,t = 0;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        int t = 0;
        for (int i = sqrt(a);i <= sqrt(b);i++) {
            if (pow(i,2) >= a && pow(i,2) <= b) t += 1;
        }
        cout << t << "\n";
    }
}