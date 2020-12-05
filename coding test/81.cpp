//벨만 포드 알고리즘

//간선 개수에 따라서 비교하면서 판단
// 간선개수 1개로 갈수 있을때, 2개로 갈수 있을때, 3개로 갈수 있을떄 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//굳이 간선을 정렬할 필요도 없음 (어차피 다 비교하는 거임 )

struct Edge{
    int s;
    int e;
    int cost;
    Edge(int a, int b , int c){
        s = a;
        e = b;
        cost = c;
    }    
};

int main()
{
    freopen("input.txt", "rt", stdin);
    int n,m;
    cin >> n >> m;
    vector<Edge>vec;
    vector<int> check(n+1,2147000000);
    for(int i=1; i<=m; i++){
        int p,q,r;
        cin >> p >> q >> r;
        vec.push_back(Edge(p,q,r));        
    }
    int re1,re2;
    cin >> re1 >> re2;
    check[re1] = 0;

    for(int i=1; i<=n-1; i++){ //간선 개수 1, 2 ... n-1까지 돌려서 최적해 구하기 
        for(int j=0; j<vec.size(); j++){
            int s = vec[j].s;
            int e = vec[j].e;
            int cost = vec[j].cost;
            if(check[s]!=2147000000 && check[s]+cost<check[e])
                check[e] = check[s] + cost;
        }
    }
    for(int j=0; j<vec.size(); j++){ //간선 n개 일때    
        int s = vec[j].s;
        int e = vec[j].e;
        int cost = vec[j].cost;
        if(check[s]!=2147000000 && check[s]+cost<check[e]){
            cout << "-1";
            exit(0);
        }
    }    
    cout << check[re2];
    return 0;
}