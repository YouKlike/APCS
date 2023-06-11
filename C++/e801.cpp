#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d, s, t;
    vector<pair<int, int>> course[6];
    int count = 0, time;

    cin >> n;
    while(n--){
        cin >> d >> s >> t; // 1 2 5 、 1 3 4
        course[d].push_back({t,s}); // [({}),({2,5},{3,4})]
    }

    for(int i = 1; i<=5; i++) sort(course[i].begin(), course[i].end());

    for(int i = 1; i<=5; i++){
        if(course[i].size() == 0) continue;

        count++;
        time = course[i][0].first;
        for(int j=1; j<course[i].size(); j++){
            if(course[i][j].second >= time){
                count++;
                time = course[i][j].first;
            }
        }
    }
    cout << count;
}