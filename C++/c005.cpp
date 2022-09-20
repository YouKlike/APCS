#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n != 0) {
        n -= 1;
        int f;
        long long reward = 0;
        cin >> f;
        for (int i = 0; i < f; i++) {
            long long area,animal,level = 0;
            cin >> area >> animal >> level;
            reward += area * level;
        }
        cout << reward << "\n";
    }
    
}