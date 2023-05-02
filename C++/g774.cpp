#include<bits/stdc++.h>
using namespace std;
struct Player {
    int Boy;
    int Girl;
    int diff;
    Player(int B,int G) {
        Boy = B;
        Girl = G;
        diff = B - G; 
    }
};
vector<Player> v; 
bool cmp(Player x,Player y) { // 計算 男生 - 女生 最大差
    if (x.diff == y.diff) return x.Boy < y.Boy;
    return x.diff < y.diff;
}

int main() {
    int N,M;
    cin >> N >> M;
    for(int i = 0;i < N+M;i++) {
        int b,g;
        cin >> b >> g;
        v.push_back(Player(b,g));
    }
    sort(v.begin(), v.end(), cmp);
    int sum = 0;
    for(int i = 0;i < N+M;i++) {
        if(i < N) sum += v[i].Boy; // 取前N個男生
        else sum += v[i].Girl; // 取後M個女生
    }
    cout << sum;
    return 0;
}