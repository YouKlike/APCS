#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, e, q, id;
    map<int, int> st;
    int pos;

    cin >> n;
    int c[n];
    for(int i=0; i<n; i++){
        cin >> c[i];
        st[c[i]] = i;
    }
    cin >> e;
    cin >> q;
    while(q--){
        cin >> id;
        pos = st[id];
        
        c[pos] = e;
        st[e] = pos;
        e = id;
    }
    cout << c[0];
    for(int i=1; i<n; i++) cout << " " << c[i];
}