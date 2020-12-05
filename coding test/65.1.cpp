#include<iostream>
using namespace std;
int map[8][8],cnt=0;
int chk[8][8];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
void DFS(int x, int y){
    if(x==7 && y==7){
        cnt++;
        return;
    }
    else{
        for(int i=0; i<4; i++){        
            int xx = x+dx[i];
            int yy = y+dy[i];    
            if(map[xx][yy]==0 && xx>=1 && xx<=7 && yy>=1 && yy<=7 && chk[xx][yy]==0){
                chk[xx][yy] = 1;
                DFS(xx,yy);
                chk[xx][yy] = 0;
            }
            else continue;                                                
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            cin >> map[i][j];
        }
    }    
    
    chk[1][1]=1;
    DFS(1,1);
    cout<< cnt;

    return 0;
}