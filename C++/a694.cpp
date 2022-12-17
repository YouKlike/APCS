#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,food[101][101];
    while (cin >> n >> m) {
        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= m;j++) {
                cin >> food[i][j];
                food[i][j] += food[i][j - 1] + food[i - 1][j] - food[i - 1][j - 1];
            }
        }
    }
}