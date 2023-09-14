#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    vector<int> v; // Remaining card
    queue<int> q; // Discarded cards
    while(cin >> N && N != 0){
        v.clear();
        for(int i = 1; i<=N; i++) q.push(i);
        while(q.size() >= 2){
            v.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        reverse(v.begin(),v.end());
        cout << "Discarded cards: " << v.back();
        v.pop_back();
        while(!v.empty()){
            cout << ", " << v.back();
            v.pop_back();
        }
        
        cout << "\n" << "Remaining card: " << q.front() << "\n";
        q.pop();
    }   
}