#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,food[100001],l,r;
    while (cin >> n >> m) {
        for (int i = 1;i <= n;i++) {
            cin >> food[i];
            food[i] += food[i-1]; // 計算總飽足度
        }
        for (int i = 1;i <= m;i++) {
            cin >> l >> r;
            cout << food[r] - food[l-1] << "\n"; // 直接算出答案
        }
    }
}