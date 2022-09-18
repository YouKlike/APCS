#include<bits/stdc++.h>
using namespace std;
int main(void) {
    int N , Ap[50] , Bp[50] , Cp[50] , num;
    vector<int> v;
    vector<int>::iterator result;
    cin >> N;

    for (int i =0; i < N; i++) {
        cin >> num;
        Ap[i] = num;
        cin >> num;
        Bp[i] = num;
        cin >> num;
        Cp[i] = num;
    }

    for (int i =0;i < N;i++) {
        v.push_back(Ap[i]);
        v.push_back(Bp[i]);
        v.push_back(Cp[i]);
    }
    result = max_element(v.begin() , v.end());

    for (int i = 0; i <= N*3 ; i++)
        for (int j = 1; j <= *result; j++) {
            if (j > Ap[i] && j < Bp[i] && j / Cp[i] != 0) cout << j << " ";
            
        }
    
}