#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,sum = 0;
    while (cin >> n) {
        sum = 0;
        for (int i = 1;n > i;i++) {
            if (n%i == 0)
                sum += i;
        }
        if (sum > n) cout << "盈數" << "\n";
        else if (sum == n) cout << "完全數" << "\n";
        else if (sum < n) cout << "虧數" << "\n";
    }

}