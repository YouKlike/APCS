#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    while (cin >> n >> m) {
        int x1[n],y1[n],x2[n],y2[n];
        for (int i = 0;i < n;i++) {
            cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        }
        for (int i = 0;i < m;i++) {
            long long sx,sy,ans = 0;
            cin >> sx >> sy;
            for (int j = 0;j < n;j++) {
                if (max(x1[j],x2[j]) >= sx && sx >= min(x1[j],x2[j]) && max(y1[j],y2[j]) >= sy && sy >= min(y1[j],y2[j]) ) {
                    ans += abs(x1[j] - x2[j]) * abs(y1[j] - y2[j]);
                }
            }
            cout << ans << "\n";
        }
    }
    


}