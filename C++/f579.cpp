#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,n,ans = 0;
    cin >> a >> b >> n;
    for (int i = 0;i < n;i++) {
        int input,a_count = 0,b_count = 0;
        cin >> input;
        while (input != 0) {
            if (input == a) a_count++;
            else if (input == b) b_count++;
            else if (input == -a) a_count--;
            else if (input == -b) b_count--;
            cin >> input;
        }
        if (a_count > 0 && b_count > 0) ans++;
    }
    cout << ans;
}