#include<bits/stdc++.h>
using namespace std;
void recur_select(int pos, int k0, int sum);
int k, ans = 0;
vector<int> v;
vector<bool> notPrime;
int main(){
    int n, d, maxSum = 0;
    cin >> n >> k;
    while(n--){
        cin >> d;
        maxSum += d;
        v.push_back(d);
    }

    for(int i = 0; i<maxSum+1; i++) notPrime.push_back(false);
    for(int i = 2; i<maxSum+1; i++) {
        if(!notPrime[i]){
            for(int j=2*i; j<maxSum+1; j+=i) notPrime[j] = true;
        }
    }
    recur_select(0,0,0);
    cout << ans;
}

void recur_select(int pos, int k0,int sum){
    if(k0 == k){
        !notPrime[sum] && ans++;
        return;
    }
    if(pos == v.size()) return;

    recur_select(pos+1, k0+1, sum+v[pos]);
    recur_select(pos+1, k0, sum);
}