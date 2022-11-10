#include<bits/stdc++.h>
using namespace std;
int main() {
    int K,N,M,R;
    cin >> K;
    for(int i = 0;i < K; i++) {
        cin >> N >> M >> R;
        int Xi[N],Yi[M],Di[10000],couple,money,moneytotal = 0;
        for(int j = 0;j < R;j++) {
            cin >> Xi[j] >> Yi[j] >> Di[j]; // 我只要5個男孩 5 個女孩
        } 
        
        cout << moneytotal << "\n";
    }

}