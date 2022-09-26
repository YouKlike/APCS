#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,x1,x2,s;
    cin >> a >> b >> c;
    x1=(sqrt(b*b-4*a*c)-b)/(2*a);
    x2=-(sqrt(b*b-4*a*c)+b)/(2*a); 
    s = b*b-4*a*c;
    if (s == 0) cout << "Two same roots x=" << x1;
    else if (s < 0) cout << "No real root";
    else cout << "Two different roots x1=" << x1 << " , x2=" << x2;
}