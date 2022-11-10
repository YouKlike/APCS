#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    double i = 1,sum = 0;
    cin >> k;
    do {
        sum += 1/i;
        i++;
    }while(k >= sum);
    cout << int(i-1);
}