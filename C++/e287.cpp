#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,minNum = 10000;
    cin >> n >> m;
    int a[n][m] = {-1};
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> a[i][j]; 
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (minNum > a[i][j]) minNum = a[i][j];
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if ()    
        }
    }
}