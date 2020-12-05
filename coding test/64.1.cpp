#include<iostream>
#include<vector>
using namespace std;
int n, cnt = 0;
int map[21][21];
int chk[21];

void DFS(int x){
    if(x==n){
        cnt++;
        return;
    }
    else{
        for(int i=1; i<=n; i++){
            if(map[x][i]==1&&chk[i]==0){
                chk[i] = 1;                
                DFS(i);    
                chk[i] = 0;                    
            }
        }
    }
}

int main(){
    int m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    
    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        map[a][b]=1;
    }
    chk[1] = 1;
    DFS(1);
    cout << cnt;
    return 0;
}