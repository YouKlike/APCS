#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,n;
    int rShift, cShift;
    int id = 0;

    cin >> r >> c >> n;
    int seat[r][c];
    rShift = (n-1)/2;
    cShift = n/2;

    for(int i=0; i<r; i++){
        for(in j=0; j<c; j++){
            seat[(i+rShift)%r][(j+cShift)%c] = ++id;
        }
    }
    
    for(int i=0; i<r; i++){
        if(i) cout << "\n";
        for(int j=0; j<c; j++){
            if(j) cout << " ";
            cout << seat[i][j];
        }
    }
}