#include<bits/stdc++.h>
using namespace std;

void solve(){
    int K;
    cin >> K;
    long long an = 0;
    for(int i = 1; i<=K; i++){
        for(int j = 1; i*j<=K; j++){
            an += K / (i * 1LL * j); 
        }
    }
    cout << an << endl;
}

int main(){
    solve();
    return 0;
}

