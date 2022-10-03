#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b,sum;
    cin >> t;
    for (int i = 0;i < t;i++) {
        sum = 0;
        cin >> a >> b;
        sum = (a/3) * (b/3);
        cout << sum << "\n";
    }
}