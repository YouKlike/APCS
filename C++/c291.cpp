#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int group[N] , fr[N];
    for (int i = 0;i < N;i++) {
        group[i] = -1;
        cin >> fr[i];
    }
    for (int i = 0;i < N;i++) {
        if (group[i] >= 0) continue;
        int now = i;
        group[i] = i;
        while (fr[now] != i) {
            group[fr[now]] = i;
            now = fr[now];
        }
    }
    int ans = 0;
    for (int i = 0;i < N;i++) {
        ans += (group[i] == i);
    }
    cout << ans << "\n";
}