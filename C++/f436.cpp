#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    do {
        int K,N,M;
        int X[10] , Y[10];
        cin >> K;
        if (K == 0) break;
        cin >> N >> M;
        for(int i = 0; i < K; i++) 
            cin >> X[i] >> Y[i];
        
        for(int i = 0; i < K;i++) {
            if (X[i] == N || Y[i] == M) 
                cout << "divisa" << endl;       
            else if (X[i] > N && Y[i] > M)
                cout << "NE" << endl;
            else if (X[i] < N && Y[i] > M) 
                cout << "NO" << endl;
            else if (X[i] > N && Y[i] < M)
                cout << "SE" << endl;
            else if (X[i] < N && Y[i] < M)
                cout << "SO" << endl;
        }
    }while (true);
}