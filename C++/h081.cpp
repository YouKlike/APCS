#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,D;
    cin >> n >> D;
    int money[n] , sell = 0, buyMoney = 0, sellMoney = 0,profit = 0;
    bool buy = false,first = true;
    for (int i = 0;i < n;i++) {
        cin >> money[i];
    }
    sellMoney = money[0];
    for (int i = 0;i < n;i++) {
        if (first == true) {
            buy = true;
            first = false;
            buyMoney = money[i];
        } else if (buy == false && money[i] <= sellMoney - D) {
            buy = true;
            buyMoney = money[i];
        } else if (buy == true && money[i] >= buyMoney + D) {
            buy = false;
            sellMoney = money[i];
            profit += money[i] - buyMoney;
        }
    }
    cout << profit;
}  