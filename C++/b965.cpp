#include<bits/stdc++.h>
using namespace std;
int R,C,M,a[10][10],b[10][10];

void rRotate() {
    for (int i = 0;i < R;i++) {
        for (int j = 0;j < C;j++) {
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0;i < R;i++) {
        for (int j = 0;j < C;j++) {
            a[C-1-j][i] = b[i][j];
        }
    }
    swap(R,C);
}

void rFlip() {
    for (int i = 0;i < R;i++) {
        for (int j = 0;j < C;j++) {
            b[i][j] = a[i][j];
        }
    }

    for (int i = 0;i < R;i++) {
        for (int j = 0;j < C;j++) {
            a[R-i-1][j] = b[i][j];
        }
    }
}

int main() {
    while (cin >> R >> C >> M) {
        int k[M];
        for (int i = 0;i < R;i++) {
            for (int j = 0;j < C;j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0;i < M;i++) cin >> k[i];

        for (int i = M - 1; i >= 0; i--) { // 要逆著運行
            if (k[i] == 0) rRotate();
            else rFlip();
        }
        cout << R << " " << C << "\n";
        for (int i = 0;i < R;i++) {
            for (int j = 0;j < C;j++) {
                if (j == C - 1) cout << a[i][j] << "\n";
                else cout << a[i][j] << " "; 
            }
            
        }
    
    }

}