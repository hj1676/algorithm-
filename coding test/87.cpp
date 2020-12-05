//87번 BFS 활용(섬나라 아일랜드)

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int n;
int map[21][21];
int drx[8]={-1,0,1,1,1,0,-1,-1};
int dry[8]={-1,-1,-1,0,-1,1,1,0};


struct Vertex{
    int x;
    int y;
    Vertex(int a, int b){
        x = a;
        y = b;
    }
};

int main(){
    freopen("input.txt","rt",stdin);    
    cin >> n;    
    for(int i=1; i<=n; i++){        
        for(int j=1; j<=n; j++){
            cin >> map[i][j];
        }
    }
    queue<Vertex>Q;  
    int cnt = 0;           
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(map[i][j]==1){
                Q.push(Vertex(i,j));                                                
                map[i][j] = 0;       
                while(!Q.empty()){
                    int p = Q.front().x;
                    int q = Q.front().y;                              
                    Q.pop();
                    for(int i=0; i<8; i++){
                        if(p+drx[i]<1 || p+drx[i]>n || q+dry[i]>n || q+dry[i]<1)
                        continue;                    
                        if(map[p+drx[i]][q+dry[i]]==1){
                            Q.push(Vertex(p + drx[i], q + dry[i]));
                            map[p + drx[i]][q + dry[i]] = 0;
                        }
                    }            
                }
                cnt++;
            }              
        }
    }
    cout << cnt;
    return 0;
}