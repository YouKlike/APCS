#include<bits/stdc++.h>
using namespace std;
int main() {
    int w,n,ans = 0;
    cin >> w >> n;
    int gift[n];

    for(int i = 0; i < n; i++) cin >> gift[i];
    sort(gift, gift+n); // {90,20,20,30,50,60,70,80,90} -> {20 20 30 50 60 70 80 90 90}
    int L = 0,R = n - 1;
    while(L <= R) {
        ans++;
        cout << "L: " << L << " R: " << R << " ";
        if(gift[L] + gift[R] <= w) { 
            L++; // 0->8, 0->7, 0->6, 1->5, 2->4, 3->3
            R--;
        } else R--; // 從最右邊減去
    }
    cout << ans;
}