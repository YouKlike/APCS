#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define N 50010
LL p[N];

LL cut(int left,int right){
    if(right-left <= 1) return 0;
    LL k = (p[right]+p[left]) / 2;

    int m = lower_bound(p+left,p+right,k)-p; 
    if(p[m-1]-p[left] >= p[right]-p[m]) m--; 
    return p[right]-p[left] + cut(m,right) + cut(left,m);
}

int main(){
    int n,l;
    scanf("%d%d", &n, &l);
    p[0] = 0;p[n+1] = l;
    for(int i = 1; i<=n; i++) scanf("%lld", &p[i]);
    printf("%lld", cut(0,n+1));
    return 0;
}