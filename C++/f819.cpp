#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s, d, fine=0;
    vector<int> book;

    cin >> n;
    while(n--){
        cin >> s >> d;
        if(d > 100){
            book.push_back(s);
            fine += (d-100)*5;
        }
    }
    if(book.size() == 0) cout << 0;
    else{
        sort(book.begin(), book.end());
        for(auto t:book) cout << t << " ";
        cout << "\n" << fine;
    }
}