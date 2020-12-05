#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
int m, n;
int tomato[1010][1010];
int dis[1010][1010];
int dx[4] = {-1, 1, 0, 0}; //방향 배열
int dy[4] = {0, 0, -1, 1};
int ma = -2147000000;

struct Point{
    int x;
    int y;
    Point(int a, int b){
        x = a; 
        y = b;
    }
};
queue<Point> Q; //큐를 선언

int main(){
    freopen("input.txt","rt",stdin);    
    cin >> m >> n;    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> tomato[i][j]; //일단 tomato 배열에 정보를 입력받아주기 
            if(tomato[i][j]==1){
                Q.push(Point(i,j));                
            }
        }
    }

   
    while(!Q.empty()){
        Point tmp = Q.front();
        Q.pop();
        int now_x = tmp.x;
        int now_y = tmp.y;                
        for(int i=0; i<4; i++){
            int next_x = now_x+dx[i];
            int next_y = now_y+dy[i];
            if (tomato[next_x][next_y] == 0 && next_x >= 1 && next_y >= 1 && next_x <= n && next_y <= m){
                Q.push(Point(next_x, next_y));
                tomato[next_x][next_y] = 1;
                dis[next_x][next_y] = dis[now_x][now_y]+1;                
            }
            else
            continue;
        }        
    }
   
    int decison = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(tomato[i][j]==0)
            decison = 0;
        }
    }

    
    if(decison == 1){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(dis[i][j]>ma)
                ma = dis[i][j];
            }            
        }
        cout << ma;
    }
    else cout << "-1";
    return 0; 
}