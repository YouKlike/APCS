#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define N 50010
LL p[N];

LL cut(int left,int right){
    if(right-left <= 1) return 0;
    LL len = p[right] - p[left],k = (p[left] + p[right]) / 2; // the middle points
    int m = left;
    while(p[m]<k) m++;
    if(p[m-1]-p[left] >= p[right]-p[m]) m--;
    return len + cut(left,m) + cut(m,right); 
}

int main(){
    int n,l;
    scanf("%d%d", &n, &l);
    p[0] = 0;p[n+1] = l;
    for(int i = 1; i<=n; i++) scanf("%lld", &p[i]);
    printf("%lld", cut(0,n+1));
    return 0;
}