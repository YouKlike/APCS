#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> poly;
    int n,p,c,m=0;
    map<int, int>::reverse_iterator it;

    cin >> n;
    while(n--){
        cin >> p >> c;
        poly[p] = c;
    }
    cin >> n;
    while(n--){
        cin >> p >> c;
        poly[p] += c;
    }
    for(it=poly.rbegin(); it != poly.rend(); it++){
        if(it->second == 0) continue;
        m++;
        cout << it->first << ":" << it->second << "\n";
    }
    if(m == 0) cout << "NULL!";
}