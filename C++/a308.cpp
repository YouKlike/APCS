#include<bits/stdc++.h>
using namespace std;
int main(){
    string s0, s1, s2;
    map<string, int> st0;
    map<string, int> st1;
    int L, R;
    getline(cin, s0);
    getline(cin, s1);

    for(auto &c: s0) c = tolower(c);
    for(auto &c: s1) c = tolower(c);

    L = 0;
    while(L<s1.length()){
        while(s1[L] == ' ') L++;

            R = L;
        while(R<s1.length() &&  s1[R] != ' ') R++;

        s2 = s1.substr(L, R-L);
        st0[s2]++;
        if(st0[s2] == 1){
            st1[s2] = L;
        }

        L = R+1;
    }
    if(st0.count(s0)) cout << st0[s0] << " " << st1[s0];
    else cout << -1;
}