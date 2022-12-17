#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k,ans = 0;
    cin >> n >> m >> k;
    int G[n][m] = {0};
    for (int i = 0;i < k;i++) {
        int x1,x2;
        cin >> x1 >> x2;
        G[x1][x2] = -1; // 但表此區域被破壞
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (G[i][j] < 0) continue; // 如果此區域被破壞則略過
            for (int k = i+1;k < n;k++) { // 同一橫列
                if (G[k][j] == 0) ans += 1;
            }
            for (int k = j+1;k < m;k++) { // 同一直列
                if (G[i][k] == 0) ans += 1;
            }
            for (int k = i+1,h = j+1;k < n && h < m;k++,h++) { // 左上至右下
                if (G[k][h] == 0) ans += 1;
            }
            for (int k = i+1,h = j-1;k <= n && h >= 0;k++,h--) { // 左下至右上
                if (G[k][h] == 0) ans += 1;
            }
        }
    }
    cout << ans*2;
}