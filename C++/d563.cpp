#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , ans = 0 ,prefix = 0,suffix = 0;
    cin >> n;
    int x[n];
    for (int i = 0;i < n;i++) cin >> x[i];
    prefix = x[0];
    suffix = x[n-1];
    for (int i = 0,j = n-1;i < n && j >= 0;) {
        if (prefix == suffix) {
            ans += 1;
            prefix += x[++i];
        } else if (prefix > suffix) {
            suffix += x[--j];
        } else if (suffix > prefix) {
            prefix += x[++i];
        }
    }
    cout << ans;
}