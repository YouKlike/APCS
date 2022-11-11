#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    bool result = false;
    cin >> a >> b >> c;

    // 先將數值變為 0 跟 1
    if (a != 0) a = 1;
    if (b != 0) b = 1;
    // 這裡我用int(a and b) 是因為c為整數 
    // 我不能讓他跟布林值去比
    if (int(a and b) == c) {
        cout << "AND\n";
        result = true;
    }
    if (int(a or b) == c) {
        cout << "OR\n";
        result = true;
    }
    if (int(a xor b) == c) {
        cout << "XOR\n";
        result = true;
    }
    if (result == false) cout << "IMPOSSIBLE\n";
}