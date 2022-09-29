#include<bits/stdc++.h>
using namespace std;
int main() {
    int R,A;
    cin >> R >> A;
    
    if (A != R) {
        cout << min(abs(A-R),min(A,R)) << "+" << max(abs(A-R),min(A,R)) << "=" << max(R,A);
    } 
    else if (A == R) {
        A -= 3;
        cout << min(abs(A-R),min(A,R)) << "+" << max(abs(A-R),min(A,R)) << "=" << max(R,A); 
    }
}