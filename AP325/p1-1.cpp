#include<bits/stdc++.h>
using namespace std;
int eval(){
    int val, x, y;
    char token[7];
    scanf("%s", token);
    if(token[0] == 'f'){
        x = eval();
        return 2*x-1;
    }else if(token[0] == 'g'){
        x = eval();
        y = eval();
        return x+2*y-3;
    }else return atoi(token);
}

int main(){
    printf("%d" , eval());
}