#include<stdio.h>
#include<iostream>
using namespace std;
//미래 구해놨던것은 메모지네이션으로 기억했다 사용하면 빠르게 재귀 사용가능
int dy[21][21];

//5c3 = 4c2 + 4c3
int DFS(int n, int r ){

    if(dy[n][r]>0)
    return dy[n][r];

    if(r==0 || n==r){
        return 1;
    }
    
    else{
        //저장해놓으면서 리턴 
        return dy[n][r] = DFS(n-1,r) + DFS(n-1,r-1);
    }
}
int main(){
    freopen("input.txt","rt",stdin);
    int n,r;
    cin >> n >> r;
    cout << DFS(n,r);
    return 0;
}