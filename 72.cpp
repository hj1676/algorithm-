//공주구하기 큐 사용 = 45번 1차원 배열 시물레이션 코딩 문제

#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt","rt",stdin);
    int n, k,x;
    cin >> n >> k;

    queue<int> Q;
    for(int i=1; i<=n; i++){
        Q.push(i);
    }
    while(!Q.empty()){    
        for(int i=1; i<k; i++){            
            Q.push(Q.front());
            Q.pop();
        }
        Q.pop();
        if(Q.size()==1){
            cout << Q.front();
            Q.pop();
        }
    }
    return 0;
}