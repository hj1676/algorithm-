#include<iostream>
using namespace std;
int dy[21][21]={0,};
int DFS(int n, int r){
    if(dy[n][r]>0)
    return dy[n][r];

    if(n==r || r==0){
        return 1;
    }
    else{
        return dy[n][r] = DFS(n-1,r-1) + DFS(n-1,r);    
    }
}




int main(){
    ios_base::sync_with_stdio(false);
    int n,r;
    freopen("input.txt","rt",stdin);
    cin >> n >> r;
    cout<< DFS(n,r);    
    return 0;
}