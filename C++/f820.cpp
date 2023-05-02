#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,T,dir;
    cin >> N;
    int height[N+10];
    height[0] = height[N+1] = 2147483647; 
    for(int i = 1; i <= N; i++) cin >> height[i]; // {0 1 2 5 2 9 1 4 3 3 3}
    cin >> T;

    dir = height[T-1] > height[T+1] ? 1 : -1;
    while(height[T] >= height[T+dir]) T += dir;
    cout << T;
}