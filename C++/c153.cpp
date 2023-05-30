#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int matrix[N][N] = {};
    // row -> 行 , columen -> 列

    int x = 0,y = N / 2; // x = 0 , y = 1 (xMax = 2 , yMax = 2)
    matrix[x][y] = 1;// { 0,1,0,
                      //  3,0,0, 
                      //  0,0,2}
    for(int fill=2; fill<=N*N; fill++) { 
        if(x == 0 && y != N-1){  // rule(1) 第一行 不在最後一列
            x = N-1; // 2
            y++; // 2
            matrix[x][y] = fill; 
            continue;
        }
        if(x != 0 && y == N-1){  // rule(2) 最後一列 不再最後一行
            x--; // 1   
            y = 0; // 0
            matrix[x][y] = fill;
            continue;
        }
        if(x == 0 && y == N-1){ // rule(3) 第一行 最後一列
            x++;
            matrix[x][y] = fill;
            continue;
        }
        if(x != 0 && y != N-1){ // rule(4) 不在第一行也不在最後一列
            if(!matrix[x-1][y+1]){ // x = 1 , y = 3 
                x = x-1;
                y = y+1;
                matrix[x][y] = fill;
            } else {
                x++;
                matrix[x][y] = fill;
            }
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(j) cout << " ";
            cout << matrix[i][j];
        }
        cout << "\n";
    }
}