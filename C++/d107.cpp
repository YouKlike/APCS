#include<bits/stdc++.h>
using namespace std;
int main() {
    int freq[26] = {0};
    string s;
    bool prime = true;
    cin >> s;
    for (auto c : s) freq[c-'a']++;
    sort(freq,freq + 26);
    int i = 0,diff;

    while (i < 25 && freq[i] == 0) i++; 
    diff = freq[25] - freq[i];

    if (diff == 0 || diff == 1) prime = false;
    else {
        for (int i = 2; prime && i <= sqrt(diff);i++) {
            if (diff % i == 0) prime = false;
        }
    }
    cout << (prime ? "Lucky Word" : "No Answer") << "\n";
    cout << (prime ? diff : 0);
}