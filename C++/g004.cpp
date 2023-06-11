#include<bits/stdc++.h>
using namespace std;
int main(){
    int dx[] = {-1, 1, 0, 0};
    dy[] = {0, 0, -1, 1};

    int r,c;
    int p, total, count;

    cin >> r >> c;
    int a[r+2][c+2] = {},
        b[r+2][c+2]; // 加邊框
    
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i<=r; i++){
        for(int j =1; j<=c; j++){
            if(a[i][j]){
                b[i][j] = a[i][j];
                continue;
            }
            total = count = 0;
            for(int k=0; k<4; k++){
                p = a[i+dx[k]][j+dy[k]];
                if(p == 0) continue;
                total += p;
                count++;
            }   
            b[i][j] = total > 0 ? total / count:0;
        }
        for(int i =1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cout << b[i][j] << " ";
            }
            cout << "\n";
        }
        
    }
}