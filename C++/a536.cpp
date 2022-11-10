#include<bits/stdc++.h>
using namespace std;
int main() {
    int N,e,t,c,total = 0,sum = 0,temp = 0;
    cin >> N;
    for (int i = 0;i < N;i++) {
        sum = 0;
        cin >> e >> t >> c;
        temp = e + t;
        while (temp / c != 0) {
            if (temp / c == 1) total += 1;
            if (total == 2) {
                sum += 1;
            }
            temp = temp / c; // 5 
            sum += temp;    // 5 + 2
        }
        cout << sum << "\n";
    }
}