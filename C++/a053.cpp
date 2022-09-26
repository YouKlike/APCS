#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N > 40) cout << "100";
    else if (N >= 21 && N <= 40) cout << (10*6)+(10*2)+(N-20);
    else if (N >= 11 && N <= 20) cout << (10*6)+((N-10)*2);
    else cout << N*6;
}