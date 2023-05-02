#include<bits/stdc++.h>
using namespace std;
int main() {
    int num[] = {0,5,6,3,4,-2},min = 1000000;
    for(int i = 0; i<7; i++) {
        if(min > num[i]) min = num[i];
    }
    cout << min;
}