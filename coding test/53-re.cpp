//stack 자료구조 직접 구현 
#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int stack[100], top = -1;

void push(int x){
    stack[++top] = x;
}
int pop(){
    return stack[top--];
}

int main(){
    freopen("input.txt","rt",stdin);
    char str[20] = "0123456789ABCDEF";
    int n,k;
    cin >> n >> k;    
    int tmp = n;
    while(tmp>0){
        push(tmp%k);
        tmp = tmp/k;    
    }
    while(top!=-1){
        cout << str[pop()];
    }

    return 0;
}


