//Kruskal MST 알고리즘   그루스칼 알고리즘 그루스칼 알고리즘 그루스칼 알고리즘
//mst -> 최소비용트리 
//find and union 구조를 이용한다.
//간선 위주로 선택...(최솟값 정렬) 간선 선택하면서 루프 안생기게 할 것 (union and find로 값을 비교하면서)

//구조체
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Edge{ //Edge 구조체를 일단 생성하기 
    int v1;
    int v2;
    int cost;
    Edge(int p, int q, int r){
        v1 = p;
        v2 = q;
        cost = r;
    }
    bool operator<(const Edge &b)const{
        return cost<b.cost; //작은게 앞으로가는 오름차순 
    }
};
int unf[101];
int Find(int a){
    if(a == unf[a])
    return a;
    else{
        return unf[a] = Find(unf[a]);
    }
}
void Union(int a, int b){
    a = Find(a);
    b = Find(b); 
    if(a!=b)
    unf[a] = b;
}
int main(){
    int v, e;
    freopen("in5.txt","rt",stdin);
    cin >> v >> e;
    for(int i=1; i<=v; i++){
        unf[i] = i;
    }
    vector<Edge>lines;
    for(int i=1; i<=e; i++){
        int p,q,r; 
        cin >> p >> q >> r;
        lines.push_back(Edge(p,q,r));
    }    
    sort(lines.begin(), lines.end()); //간선들 정보를 일단 cost 최솟값 순으로 정렬을 완료하였음 
    
    int sum = 0;
    for(int i=0; i<lines.size(); i++){
        if(Find(lines[i].v1) == Find(lines[i].v2))
        continue;

        else{
            Union(lines[i].v1, lines[i].v2);
            sum+=lines[i].cost;        
        }
    }
    cout << sum;
    return 0;
}

