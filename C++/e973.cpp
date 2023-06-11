#include<bits/stdc++.h>
using namespace std;
int main(){
    string s0;
    int a[10] = {};
    vector<pair<int, int>> v;

    cin >> s0;
    for(auto c:s0) a[c-'0']++;
    for(int i = 0; i<10; i++){
        if(a[i]) v.push_back({a[i],-i});
    }

    sort(v.begin(), v.end());
    for(int i = v.size()-1; i>=0; i--) cout << -v[i].second << " ";
}