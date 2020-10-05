//BFS 기초 (그래프 최단거리)
//방향 그래프가 주어졌을때 1번정점에서 각 정점으로 갈때의 최소 간선수 구하기 (최소 = 넓이 우선 탐색 BFS)

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int check[21],dis[21]; //dis는 거리를 파악하기 위한 배열 ㅇㅇ
vector<int>map[21];

int main(){
    freopen("input.txt","rt",stdin);
    int n,m;
    cin >> n >> m;
    int p,q;
    vector<int> map[21];
    queue<int> Q;    
    for(int i=1; i<=m; i++){
        cin >> p >> q;
        map[p].push_back(q);        
    }
    //이제 Q를 통해 BFS 탐색하기 
    Q.push(1);
    check[1]=1;
    int x; 
    while(!Q.empty()){ //Queue가 비워져있지 않을때까지 
        x = Q.front();
        Q.pop();
        
        for(int i=0; i<map[x].size(); i++){
            if(check[map[x][i]]==0){
                check[map[x][i]]=1;
                Q.push(map[x][i]);
                dis[map[x][i]] = dis[x]+1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        cout << i << ":" <<  dis[i] << endl;
    }



    return 0;
}