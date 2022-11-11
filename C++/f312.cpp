#include<bits/stdc++.h>
using namespace std;
int main() {
    // 答案可能是負的
    int Y1,Y2,n,maxNum = -1000000;
    int a1,b1,c1;
    int a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;

    for (int i = 0;i <= n;i++) {
        Y1 = a1 * pow(i,2) + b1*i + c1;
        Y2 = a2 * pow((n-i),2) + b2*(n-i) + c2;
        
        if (Y1+Y2 > maxNum) {
            maxNum = Y1+Y2;
        }
    }
    cout << maxNum;
}