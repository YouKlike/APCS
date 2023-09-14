#include<bits/stdc++.h>
using namespace std;
#define MAXN 100001

struct Stack{
    int arr[MAXN], now;
    Stack() : now(0) {}
    int top(){ // 回傳 stack 最頂端的值
        return arr[now-1];
    }
    void pop(){ // 刪除 stack 頂端資料
        now--;
    }
    void push(int val){ // 新增一筆 val 到 stack 的最頂端
        arr[now++] = val;
    }
    int size(){ // 回傳 stack 大小
        return now;
    }
}