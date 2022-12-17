#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    while (cin >> a >> b >> c >> d) {
        if (b != c) {
            cout << "Error\n";
            continue;;
        }
        long long mat1[a][b],mat2[c][d];
        for (int i = 0;i < a;i++) {
            for (int j = 0;j < b;j++) {
                cin >> mat1[i][j];
            }
        }
        for (int i = 0;i < c;i++) {
            for (int j = 0;j < d;j++) {
                cin >> mat2[i][j];
            }
        }
        long long ans[a][d];
        for (int i = 0;i < a;i++) {
            for (int j = 0;j < d;j++) {
                ans[i][j] = 0;
                for (int k = 0;k < c;k++) {
                    ans[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        for (int i = 0;i < a;i++) {
            for (int j = 0;j < d;j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    

}