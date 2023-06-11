#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s0;
    map<int, int> st;

    cin >> n;
    while(n--){
        cin >> s0;
        st[stoi(s0.substr(3,2))]++;
    }
    for(auto p:st) cout << p.first << " " << p.second << "\n";
}