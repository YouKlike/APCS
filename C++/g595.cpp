#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,total = 0;
    cin >> n;
    int h[n];
    for (int i = 0;i < n;i++) cin >> h[i]; 
    for (int i = 0;i < n;i++) {
        if (i == 0 && h[i] == 0) {
            total += h[i+1];
            continue;
        }
        if (i == n-1 && h[i] == 0 && h[0] > h[i-1]) {
            total += h[0];
            continue;
        } else if (i == n-1 && h[i] == 0 && h[i-1] > h[0]) {
            total += h[i-1];
            continue;
        }
        if (h[i] == 0) {
            if (h[i+1] > h[i-1]) total += h[i-1];
            else total += h[i+1];
        }
    }
    cout << total;
}