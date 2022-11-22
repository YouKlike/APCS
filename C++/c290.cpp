#include<bits/stdc++.h>
using namespace std;
int main() {
    int A = 0,B = 0;
    string num;
    cin >> num;
    for (int i = 0;i < num.size();i++) {
        if (i % 2 == 0) A += num[i] - '0';
        else B += num[i] - '0';
    }
    cout << abs(A - B);
}