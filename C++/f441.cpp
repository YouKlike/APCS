#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s, m, x;
    int score;

    cin >> n >> s;
    int ans[n];
    for(int i = 0; i<n; i++) cin >> ans[i];

    cin >> m;
    while(m--){
        score = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            score += (x == ans[i] ? s:0);
        }
        cout << score << "\n";
    }
}