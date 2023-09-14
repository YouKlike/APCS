#include<bits/stdc++.h>
using namespace std;
bool is_prime(int f);

int main(){
    int n;
    cin >> n;
    for(int f=2; f<=sqrt(n); f++){
        if(is_prime(f) && n%f == 0){
            cout << n/f;
            break;
        }
    }
}

bool is_prime(int f){
    for(int i=2; i<=sqrt(f); i++){
        if(f%i) continue;
        else return false;
    }
    return true;
}