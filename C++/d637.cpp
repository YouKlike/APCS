#include<bits/stdc++.h>
using namespace std;

int a[10001];
int b[10001];
int c[101];

int main () {
    int N;
    cin >> N;
    for (int i = 0;i < N;i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0;i < 100;i++) {
        c[i] = 0;
    }
    for (int i = 0;i <= N;i++) {
        for (int j = 100;j >= a[i];j--) {
            c[j] = max(c[j] , c[j - a[i]] + b[i]);
        }
    }
    cout << c[100];
    
}
