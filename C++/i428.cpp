#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,xi , yi,maxNum = -1000000,minNum = 1000000, bx , by;
    // 先輸入第一個座標位置
    cin >> n >> bx >> by;
    for (int i = 0;i < n-1;i++) {
        // 輸入第二個座標位置
        cin >> xi >> yi;
        // 計算距離
        int distance = abs(xi - bx) + abs(yi - by);
        bx = xi;
        by = yi;
        maxNum = max(maxNum , distance);
        minNum = min(minNum , distance);
    }
    cout << maxNum << " " << minNum;
}