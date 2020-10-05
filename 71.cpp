//송아지찾기(BFS : 상태 트리 검색)
//스카이콩콩을 타고 최소 횟수 구하기... 최소 횟수, 최단 거리 = 큐를 이용한 BFS 문제


//상태 트리 검색..레벨 탐색 하기 
#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int check[10001], d[3]={-1,1,5};//방향 배열까지 잡아주기 


int main(){
    //5~14
    freopen("input.txt","rt",stdin);
    int start,end,x,pos;
    cin >> start >> end;
    queue<int>Q;
    check[start] = 1;
    Q.push(start);
    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        for(int i=0; i<3; i++){
            pos = x+d[i];
            
            if(pos<=0 || pos>10000)
            continue;

            if(pos==end){
                cout << check[x];
                exit(0); //프로그램 자체가 종료 
            }            
            if(check[pos]==0){
                check[pos] = check[x]+1;
                Q.push(pos);                
            }                                    
        }


    }





    return 0;
}