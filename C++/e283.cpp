#include<bits/stdc++.h>
using namespace std;
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    char letter[16];
    letter[5] = 'A';
    letter[7] = 'B';
    letter[2] = 'C';
    letter[13] = 'D';
    letter[8] = 'E';
    letter[12] = 'F';
    int N;
    while(cin >> N) {
        for (int i = 0;i < N;i++) {
            int x = 0,tmp;
            for (int j = 0; j < 4;j++) {
                cin >> tmp;
                // 當我的數字往前一格就 * 2 (二進位法)
                // 假設是 0 0 0 1 這樣 x = 1
                // 假設是 0 1 0 0 這樣 x = 0*2+0 + 0*2+1 + 1*2+0 + 2*2+0
                x = x * 2 + tmp; 
            }
            cout << letter[x];
        }
        cout << "\n";
    }
}