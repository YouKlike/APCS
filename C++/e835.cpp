#include<bits/stdc++.h>
using namespace std;
int main(){
    int zone[] = {0,2500,7500,10000};
    int N, Z, diff, seat;

    cin >> N;
    Z = lower_bound(zone, zone+4, N)-zone;

    diff = N-zone[Z-1];
    seat = Z == 2 ? 50: 25;
    cout << Z << " " << (diff-1)/seat+1 << " " << (diff-1)%seat+1;
}