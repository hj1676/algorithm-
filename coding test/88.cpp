//BFS 활용(미로의 최단거리) -> 레벨 탐색, 최단거리 탐색 

#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int a[4]= {-1,1,0,0};
int b[4]= {0,0,-1,1};
int map[8][8];
int dis[8][8]; //거리값 dis를 표시하는 2차원 배열
//앞으로 배열 선언은 전역변수로 관리하는 습관을 들이자.->그래야지 0으로 초기화되니깐!


//생각해보니까 굳이 정렬할 필요는 없음
struct Point{
    int x;
    int y;
    Point(int a, int b){
        x = a;
        y = b;        
    }
};

int main(){
    freopen("input.txt","rt",stdin);
   
    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            cin >> map[i][j];            
        }    
    }
    queue<Point>Q;          
    Q.push(Point(1,1));
    map[1][1] = 0;

    while(!Q.empty()){        
        if(dis[7][7]!=0)
        break;                        
        Point top = Q.front();                   
        Q.pop();                
        for(int i=0; i<4; i++){            
            int next_x = top.x + a[i];            
            int next_y = top.y + b[i];            
            if(next_x<1 ||next_x>7 || next_y>7 || next_y<1)
            continue;                        
            if(map[next_x][next_y]==0){                
                Q.push(Point(next_x, next_y)); //큐에 삽입해주기
                map[next_x][next_y] = 1;       //map을 1로 수정해주고(못가게)                
                dis[next_x][next_y] = dis[top.x][top.y]+1;
            }
        }   
    }
    if(dis[7][7] == 0)
    cout << "-1";    
    cout << dis[7][7];
    return 0;
}