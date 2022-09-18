#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[50],maxNum=0;
    for (int i = 0;i<3;i++) {
        cin >> a[i];
        if (a[i] > maxNum) 
            maxNum = a[i];
    }
    cout << maxNum;
}