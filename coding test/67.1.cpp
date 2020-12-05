#include<iostream>
using namespace std;
int n;
int map[21][21]={0,};
int chk[21];
int mi = 2147000000;
void DFS(int x, int sum){
    if(x==n){
        if(sum<mi)
        mi=sum;
        return;
    }    
    else{
        for(int i=1; i<=n; i++){
            if(map[x][i]!=0 && chk[i]==0){
                chk[i]=1;
                DFS(i,sum+map[x][i]);
                chk[i]=0;
            }   
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    int m;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        map[a][b] = c;
    }
    chk[1] = 1;    
    DFS(1,0);
    cout << mi;
    return 0;
}