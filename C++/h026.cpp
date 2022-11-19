#include<bits/stdc++.h>
using namespace std;
int main() {
    int F,N,times0 = 0,times2 = 0,times5 = 0;
    cin >> F >> N;
    int y[N];

    for (int i = 0;i < N;i++) {
        cin >> y[i];
    }

    for (int i = 0;i < N;i++) {
        if (times0 == 2) {
            F = 5;
            times0 = 0;
        }
        if (times2 == 2) {
            F = 0;
            times2 = 0;
        }
        if (times5 == 2) {
            F = 2;
            times5 = 0;
        }
        if (F == 0) {
            if (y[i] == 0) {
                times0 += 1;
                cout << y[i] << " ";
                if (i+1 == N) cout << ": Drew at round " << i+1;
                continue;
            }
            else if (y[i] == 2) cout << F << " : Won at round " << i+1;
            else if (y[i] == 5) cout << F << " : Lost at round " << i+1;
            times0 = 0;
            break;
        }
        if (F == 2) {
            if (y[i] == 2) {
                times2 += 1;
                cout << y[i] << " ";
                if (i+1 == N) cout << ": Drew at round " << i+1;
                continue;
            }
            else if (y[i] == 5) cout << F << " : Won at round " << i+1;
            else if (y[i] == 0) cout << F << " : Lost at round " << i+1;
            times2 = 0;
            break;
        }  
        if (F == 5) {
            if (y[i] == 5) {
                times5 += 1;
                cout << y[i] << " ";
                if (i+1 == N) cout << ": Drew at round " << i+1;
                continue;
            }
            else if (y[i] == 0) cout << F << " : Won at round " << i+1;
            else if (y[i] == 2) cout << F << " : Lost at round " << i+1;
            times5 = 0;
            break;
        }
    }
}