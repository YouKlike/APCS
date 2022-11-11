#include<bits/stdc++.h>
using namespace std;
int main() {
    int tmp1[5];
    int tmp2[5];
    int result = 0;
    for (int i = 0;i < 2;i++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        tmp1[i] = a+b+c+d;

        int x,y,z,s;
        cin >> x >> y >> z >> s;
        tmp2[i] = x+y+z+s;

        if (tmp1[i] > tmp2[i]) result += 1;
        if (tmp1[i] < tmp2[i]) result -= 1;

        cout << tmp1[i] << ":" << tmp2[i] << "\n";
    }
    if (result > 0) cout << "Win";
    else if (result < 0) cout << "Lose";
    else cout << "Tie";
}