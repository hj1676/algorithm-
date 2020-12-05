//다익스트라 알고리즘 
//다익스타라 방법 

//최솟값 찾아서 체크하고 그 최솟값에서 뻗어나가기 with 최소힙 (우선순위큐) -> 굉장히 효율적 

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


struct Edge{ //struct 구조체 
    int to;
    int cost;
    Edge(int a, int b){
        to = a;
        cost = b;
    }   
    bool operator<(const Edge &b)const{
        return b.cost<cost;
    }
};

int n,m;
int main(){
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    vector<int> check(n+1, 2147000000); //체크배열은 무한대로 초기화
    vector<pair<int,int>>vec[n+1];
    for(int i=1; i<=m; i++){
        int p,q,r;
        cin >> p >> q >> r;
        vec[p].push_back(make_pair(q,r));        
    }
    priority_queue<Edge>PQ;
    PQ.push(Edge(1,0)); //1번 정점 + 비용은 0 
    check[1] = 0; //1을 추가해주기

    while(!PQ.empty()){ //(1,0)
        int now =  PQ.top().to;
        int cost = PQ.top().cost; 
        PQ.pop();
        if(cost > check[now]) continue; //커진게 pop되서 나온다면 애초에 할 필요가 없으므로 스킵해주자 
        for(int i=0; i<vec[now].size(); i++){
            int next = vec[now][i].first; //다음으로 갈 정점(3,4) (2,12)                        
            int nextcost = cost + vec[now][i].second;
            if(check[next]>nextcost){
                check[next] = nextcost;
                PQ.push(Edge(next,nextcost));
            }    
        }
    }
    for(int i=2; i<=n; i++){
        if(check[i]!= 2147000000) cout << i << " : " << check[i]<<endl;
        else cout << i << " : impossible " << endl;
    }



    

    return 0;
}






