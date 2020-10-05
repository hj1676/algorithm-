//K진수 출력.. 스택 자료구조 사용
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;
int main(){
    freopen("input.txt","rt",stdin);    
    int n,k;
    cin >> n >> k;
    int tmp = n;
    int re = 0;
    stack<int>s;
    char str[17]="0123456789ABCDEF"; //이렇게 하면 된다.
    while(tmp > 0){               
        s.push(tmp%k);        
        tmp = tmp/k;
    }
    while(!s.empty()){                
        cout << str[s.top()];
        s.pop();        
    }




    return 0;
}