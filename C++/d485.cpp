#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if (a == b && a%2 != 0) cout << 0;
    else if (a == 1) cout << abs((b/2) - (a/2));
    else cout << abs((b/2) - (a/2)) + 1;
}