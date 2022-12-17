#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,f,t;
    int satiety[100010];
    while (cin >> n >> m) {
        for (int i = 1;i <= n;i++) {
            cin >> satiety[i];
            satiety[i] += satiety[i - 1];
        }
        for (int i = 1;i <= m;i++) {
            cin >> f >> t;
            cout << satiety[t] - satiety[f-1] << "\n";
        }
    }
}