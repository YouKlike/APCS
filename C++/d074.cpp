#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,num,dp[50],maxNum=0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> dp[i];
    }
    for (int i = 0;i <n;i++) {
        if (dp[i] > maxNum) maxNum = dp[i];
    }
    cout << maxNum;
}