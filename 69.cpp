//인강듣기 BFS
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
//연결되어 있는 모든 노드를 바로 방문 
//레벨순으로 탐색한다.. 넓이우선탐색(BFS) -> 큐 자료구조를 사용한다.

//일단 이문제는 큐를 직접 구현해보는 문제 
using namespace std;
int Q[100], front = -1, back= -1, check[10];
vector<int>map[10]; //인접리스트 사용하기 
int main(){
    freopen("input.txt","rt",stdin);
    int a,b,x;
    for(int i=1; i<=6; i++){
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a); //무방향        
    }
    Q[++back] = 1; //집어넣을때는 back으로
    check[1]=1;
    while(front<back){        
        x = Q[++front]; //뺄때는 front로 
        cout << x << " ";
        for(int i=0; i<map[x].size(); i++){
            if(check[map[x][i]]==0){
                check[map[x][i]]=1;
                Q[++back] = map[x][i];                
            }
        }

    }
    return 0;
}