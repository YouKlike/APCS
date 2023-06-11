#include<bits/stdc++.h>
using namespace std;
int main(){
    int match[] = {6,2,5,5,4,5,6,3,7,6};
    int n,a,b;
    int cA = 0, cB = 0, cC = 0;
    int ans = 0;
    
    cin >> n;
    for(auto ch:to_string(a)) cA += match[ch-'0'];

    for(a=0; a<1000; a++){
        cA = 0;
        for(auto ch:to_string(a)) cA += match[ch-'0'];
        for(b=0; b<1000; b++){
            cB = 0;
            for(auto ch:to_string(b)) cB += match[ch-'0'];
            cout << cB << " ";
            
            cC = 0;
            for(auto ch:to_string(a+b)) cC += match[ch-'0'];
            cout << cC << " ";

            if(cA+cB+cC == n-4) ans++; 
        }
    }
    cout << ans;
}