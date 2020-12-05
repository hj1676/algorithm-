//89번  -> 토마토 BFS 활용

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int m,n;
int map[1001][1001];
int a[4]={0,0,-1,1};
int b[4]={-1,1,0,0};

struct Point{
    int level;
    int x;
    int y;
    Point(int l, int a, int b){
        level = l;
        x = a;
        y = b;
    }
};

int main(){    
    freopen("in1.txt","rt",stdin);
    cin >> m >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> map[i][j];
        }
    }
    int cnt = 0;
    int minus = 0;
    queue<Point> Q;    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(map[i][j]==1){
            Q.push(Point(0,i,j));     
            cnt++;
            }
            if(map[i][j]==-1)
            minus++;
        }
    }    
    int day = 0;
    int max = -2147000000;
    while(!Q.empty()){
        Point tmp = Q.front();        
        Q.pop();

        for(int i=0; i<4; i++){
            int next_x = tmp.x + a[i]; 
            int next_y = tmp.y + b[i];
            if(map[next_x][next_y]==0 && next_x>=1 && next_y>=1 && next_x<=n && next_y<=m){
                cnt++;
                map[next_x][next_y]=1;
                Q.push(Point(tmp.level+1,next_x,next_y));
                if(tmp.level+1 > max)
                max = tmp.level+1;
            }        
        }              
    }
    if(cnt==0)
    cout<<"0";
    else{
        if(cnt == m*n - minus)
        cout << max;
        else
        cout << "-1";
    }    
    return 0;
}
