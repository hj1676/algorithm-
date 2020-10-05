//부분집합(DFS)
//강의는 일단 들었다.. 내가 한번 구현해보자
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int check[11];
void DFS(int x){
    //종료지점은 항상 if , else로 
    if(x==n+1){ //체크 배열 탐색 
        for(int i=1; i<=n; i++){
            if(check[i]==1)
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    else{        
        check[x]=1;
        DFS(x+1);              
        check[x]=0; 
        DFS(x+1);
    }
}

int main(){
    freopen("input.txt","rt",stdin);    
    cin >> n;
    DFS(1); //1레벨 넘기기 
    return 0;
}