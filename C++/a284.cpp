#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,sum = 0,t=0;
    cin >> a >> b >> c;
    for (int i = 1;i <= c;i++) {
        if (i % a == 0 || i % b == 0) sum += i;
    }
    sum = sum%26;
    for (char i = 'A' ; i <= 'Z';i++) {
        t += 1;
        if (t == sum) cout << i;
    }
}