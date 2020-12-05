//라이언킹 심바.. BFS final
//반복연습만이 살아가길 
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int n;
int map[26][26];
int ch[26][26];

struct State{ //좌표 구조체 
    int x,y,dis;
    State(int a, int b, int c){
        x = a;
        y = b;
        dis = c;        
    }
    //최소 힙 만드는 기준 
    bool operator<(const State &bb)const{
        if(dis == bb.dis){ //거리가 같은 경우 
            if(x == bb.x) 
            return y > bb.y; //final은 왼쪽 리턴         
            else
            return x > bb.x;  //위쪽에 있는 것을 리턴                       
        }
        else return dis > bb.dis; //거리가 같지 않다면 거리순으로 리턴 
    }
};

struct Lion{ //심바의 상태 
    int x,y,s,ate;
    void Sizeup(){
        ate = 0;
        s++;
    }
};


int main(){
    freopen("input.txt","rt",stdin);    
    priority_queue<State>PQ; //우선순위큐를 생성해준다. 
    Lion simba; //라이온 객체 simba 생성   Lion simba를 만들어줌
    cin >> n;    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> map[i][j]; //일단 map 정보를 입력받았음                                            
            if(map[i][j] == 9){ //map의 값이 9라는 뜻은, 현재 simba의 위치라는 것 (초기상태 )
            simba.x = i;   
            simba.y = j;
            map[i][j] = 0; //방문을 했으므로 0으로 바꾸어준다. 
            }                   
        }
    }   
    PQ.push(State(simba.x,simba.y,0)); //최초의 거리 0 
    simba.s =2;
    simba.ate = 0;  

    int res;
    int dx[4]={-1,0,1,0}; //상하좌우를 비교하기 위한 방향 배열 
    int dy[4]={0,1,0,-1};
    while(!PQ.empty()){  
        State tmp = PQ.top();        
        PQ.pop();  //pop하는 스킬 
        int x = tmp.x;
        int y = tmp.y;  
        int z = tmp.dis; //최초에는 0이된다.        
        if(map[x][y]!=0 && map[x][y]<simba.s){
            simba.x = x;
            simba.y = y;
            simba.ate++;
            if(simba.ate>=simba.s)
            simba.Sizeup();
            map[x][y] = 0;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    ch[i][j] = 0; //체크배열은 모두 초기화, 다시 퍼져야 하므로 
                }                        
            }
            while(!PQ.empty()){
                PQ.pop();
            }            
            res = tmp.dis;
        }                             
        for(int i=0; i<4; i++){ //퍼져나가기            
            int xx = x+dx[i];
            int yy = y+dy[i];
            if(xx<1 || xx >n || yy<1 || yy>n || map[xx][yy] > simba.s || ch[xx][yy]>0)
            continue;
            PQ.push(State(xx,yy,z+1));     
            ch[xx][yy] = 1;                                  
        }

    }
    cout << res;


    return 0;
}