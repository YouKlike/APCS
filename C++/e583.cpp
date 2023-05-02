#include<bits/stdc++.h>
using namespace std;
int main() {
    int zone[] = {0,2500,7500,10000},N,seat,Z,diff;
    cin >> N;
    Z = lower_bound(zone,zone+4,N) - zone;
    seat = Z == 2 ? 50 : 25;
    diff = N-zone[Z-1]; // if input is 26 then 26 - 0
    cout << Z << " " << (diff-1) / seat+1 << " " << (diff-1) % seat + 1;

}