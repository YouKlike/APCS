#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,cnt = 0;
    string s,ks;
    cin >> k >> s;
    vector<int> v;
    for (int i=0; i<s.size(); i++){
        s[i] = ('A' <= s[i] && s[i] <= 'Z');
    }
    for (int i = 0;i < k;i++) {
        v.push_back(s[i]);
    }
    for (auto i : v) {
        ks += v[i];
    }
    cout << ks;
}