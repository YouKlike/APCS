#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    do {
        int K,N,M;
        int X[1000] , Y[1000];
        cin >> K;
        if (K == 0) break;
        cin >> N >> M;
        for(int i = 0; i < K; i++) 
            cin >> X[i] >> Y[i];
        int a;
        for(int i = 0; i < K;i++) {
            if (X[i] == N || Y[i] == M) 
                cout << "divisa\n";       
            else if (X[i] > N && Y[i] > M)
                cout << "NE\n";
            else if (X[i] < N && Y[i] > M) 
                cout << "NO\n";
            else if (X[i] > N && Y[i] < M)
                cout << "SE\n";
            else if (X[i] < N && Y[i] < M)
                cout << "SO\n";
        }
    } while (true);
}