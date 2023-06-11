#include<bits/stdc++.h>
using namespace std;
void recur_pre(string in, string post);

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    string infix,postfix;
    getline(cin , infix);
    getline(cin , postfix);

    recur_pre(infix, postfix);

    return 0;
}

void recur_pre(string infix, string postfix){
    int infixRootPos;
    string infixL, infixR;
    string postfixL, postfixR;

    if(infix == "") return;

    cout << postfix.back();

    infixRootPos = infix.find(postfix.back());

    infixL = infix.substr(0, infixRootPos); // 擷取 0到 infixRootPos 的字串
    infixR = infix.substr(infixRootPos+1); // 刪除 infixRootPos+1 位置的字元
    
    postfixL = postfix.substr(0, infixL.length());
    postfixR = postfix.substr(infixL.length(), infixR.length());

    recur_pre(infixL, postfixL);
    recur_pre(infixR, postfixR);
}