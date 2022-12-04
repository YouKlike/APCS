#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while (cin >> n >> m) {
        int satiety[n];
        for (int i = 0;i < n;i++) cin >> satiety[i];
        for (int i = 0;i < m;i++) {
            int l , r , ans = 0;
            cin >> l >> r;
            for (int j = l-1;j < r;j++) {
                ans += satiety[j];
            }
            cout << ans << "\n";
        }
    }
}