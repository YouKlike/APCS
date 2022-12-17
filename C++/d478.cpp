#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    int num1[m],num2[m];
    while (n--) {
        for (int i = 0;i < m;i++) {
            cin >> num1[i]; 
        }
        for (int i = 0;i < m;i++) {
            cin >> num2[i];
        }
        int i = 0, j = 0 , ans = 0;
        while (i < m && j < m) {
            if (num1[i] == num2[j]) {
                ans++;
                i++;
            } else if (num1[i] < num2[j]) {
                i++;
            } else {
                j++;
            }
        }
        cout << ans << "\n";
    }
    
}