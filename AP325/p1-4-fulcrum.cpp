#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define N 50010
LL p[N];

// 找到切點後對左右兩個遞迴

// input 7 3
// 2 4 1 3 7 6 9
// first cut in 7 -> [2,4,1,3] , [6,9]
LL cut(int left, int right, int k){
    int s=0, t=0,Lps[right];
    int pos = lower_bound(p+left, p+right, k);
    
}

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i<=n; i++) cin >> p[i];
}
