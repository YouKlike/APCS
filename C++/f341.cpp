#include<bits/stdc++.h>
using namespace std;
int main(){
    string S, T;
    int P, Q;
    string s1, s2;

    cin >> S >> T;

    P = S.find(T);
    s1 = S.substr(0,P);
    reverse(s1.begin(), s1.end());

    Q = P+T.length();
    s2 = S.substr(Q);
    reverse(s2.begin(), s2.end());

    cout << s2+T+s1;
}