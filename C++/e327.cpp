#include<bits/stdc++.h>
using namespace std;
int main(){
    string s0;
    int count = 0;

    getline(cin, s0);
    for(auto c:s0) !isspace(c) && count++;
    cout << count;
}