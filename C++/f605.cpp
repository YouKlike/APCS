#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,d,sum = 0,count = 0;
    cin >> n >> d;
    for (int i = 0;i < n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if (abs(b-a) >= d || abs(c-b) >= d || abs(c-a) >= d) {
            sum += (a+b+c)/3;
            count += 1;
        } 
    }
    cout << count << " " << sum;
}