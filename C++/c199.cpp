#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,top=0;
    vector<int> v;

    cin >> n;
    cin >> h;
    v.push_back(h);
    n--;
    while(n--){
        cin >> h;
        if(h !=  v.back()) v.push_back();
    }
    for(int i=1; i<v.size()-1; i++){
        if(v[i-1]<v[i] && v[i]>v[i+1]) top++;
    }
    cout << top;
}