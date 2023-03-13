#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n,h;
    cin >> m >> n >> h;
    char arr[m][n];
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            arr[m][n] = ' ';
        }
    }
    int total = 0;
    int maxn = 0;
    for (int times = 0;times < h;times++) {
        int r,c,t;
        cin >> r >> c >> t;
        
        if (t == 0) {
            if (arr[r][c] == ' ') total++;
            arr[r][c] = '@';
            for (int i = r+1;i < m;i++) {
                if (arr[i][c] == '@') {
                    for (int j = r+1;j < i;j++) {
                        if (arr[j][c] == ' ') {
                            total++;
                            arr[j][c] = '|';
                        }
                        if (arr[j][c] == '-') {
                            arr[j][c] = '+';
                        }
                    }
                    break;
                }
            }
        }

        // debug
        for (int i = 0;i < m;i++) {
            for (int j = 0;j < n;j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        cout << total << "\n" << maxn;
    }

}