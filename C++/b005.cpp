#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        int G[n][n] = {0},change_a = 0,change_b = 0,transA = 0,transB = 0;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                cin >> G[i][j];
            }
        }
        for (int i = 0;i < n;i++) {
            int sum = 0;
            for (int j = 0;j < n;j++) { // 將陣列的數值加總
                sum += G[i][j];
            }
            if (sum%2 == 1) { // 假設為奇數則此矩陣不等價，則 transA 加1
                change_a = i;
                transA++;
            }
        }
        for (int i = 0;i < n;i++) {
            int sum = 0;
            for (int j = 0; j < n;j++) { // 將陣列的數值加總
                sum += G[j][i];
            }
            if (sum%2 == 1) { // 假設為奇數則此矩陣不等價，則 transA 加1
                change_b = i;
                transB++;
            }
        }
        if (transA == 1 && transB == 1) {
            cout << "Change bit (" << change_a+1 << "," << change_b+1 << ")" << "\n";
        } else if (!transA && !transB) {
            cout << "OK" << "\n";
        } else {
            cout << "Corrupt" << "\n";
        }
    }
}