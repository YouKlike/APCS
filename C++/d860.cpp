#include<bits/stdc++.h>
using namespace std;
int main() {
    int x0,y0,c0;
    int count = 0;
    cin >> x0 >> y0;

    if (x0 > y0 || y0%x0) cout << 0;
    else {
        c0 = y0 / x0;

        bool notPrime[c0+1] = {};
        notPrime[0] = notPrime[1] = true;
        for (int i = 2;i < c0+1;i++) {
            if (!notPrime[i])
                for (int j = 2*i;j < c0+1;j+=i) notPrime[j] = true;
        }
        
        for (int i = 0;i <= c0;i++) {
            if (!notPrime[i] && !(c0%i)) count++;
        }
        cout << pow(2, count);
    }
}