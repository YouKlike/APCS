#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    while (cin >> n >> m) {
        int sum = 0;
        for (int i =0;;i++) {
            sum += n + i;
            if (sum > m) {
                cout << i+1 << "\n";
                break;
            }
        }
    }
}