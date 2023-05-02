#include<bits/stdc++.h>
using namespace std;

int main() {
    int H,M,S,T;
    cin >> H >> M >> S >> T;
    int time = (H*60+M)+90*T; // 90 = 1h30m = 2160 / 24;
    int total = abs(T);
    while (total--) {
        if (time > 2160) {
            time -= 2160;
        } else if (time < 0) {
            time += 2160;
        }
    }

    div_t result_H = div(time,60);
    if (S < 10) 
        cout << result_H.quot/10 << ":" << result_H.rem  << ":0" << S;
    else 
        cout << result_H.quot/10 << ":" << result_H.rem  << ":" << S;
}