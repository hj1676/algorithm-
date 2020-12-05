//prim MST 알고리즘 
//크루스칼 -> 간선 중심   //프림 -> 정점 중심(정점을 추가해나가는 방법)
//최소 힙!
//프림알고리즘 프림알고리즘 프림알고리즘


#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;


struct Edge{
    int to;
    int cost;
    Edge(int a, int b){
        to = a;
        cost = b;
    }
    
    bool operator<(const Edge &b) const{
        return cost>b.cost; 
    }
};

    int main()
    {
        int v, e, sum = 0;
        freopen("in5.txt", "rt", stdin);
        cin >> v >> e;
        
        vector<Edge>vec[v + 1]; //굳이 vector까지 edge로 선언해줄 필요는 없고 그냥 vector<pair<int,int>>[]  make_pair() first second 사용하자
        priority_queue<Edge> PQ;
        for (int i = 1; i <= e; i++)
        {
            int p, q, r;
            cin >> p >> q >> r;                        
            vec[p].push_back(Edge(q, r));            
            vec[q].push_back(Edge(p, r)); //굳이 vector까지 edge로 선언해줄 필요는 없고 그냥 vector<pair<int,int>>[]  make_pair() first second 사용하자                        

        }

        int res = 0;
        PQ.push(Edge(1, 0));
        vector<int>check(v+1);
        while (!PQ.empty())
        {            
            Edge tmp = PQ.top();
            PQ.pop();
            int to = tmp.to;
            int cost = tmp.cost;
            if(check[to]==0){
                res += cost;
                check[to] = 1;
                for(int i=0; i<vec[to].size(); i++){
                    PQ.push(Edge(vec[to][i].to, vec[to][i].cost));
                }
            }  
        }
        cout << res;
        return 0;
}


