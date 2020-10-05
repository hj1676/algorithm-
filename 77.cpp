//disjoint set 자료구조(tree)
//두 집합이 들어왔을때 겹치는게 있다면 그냥 그 두집합을 한집합으로 보자  -> 이런 방식으로 집합을 만들면 disjoint set(서로소 집합)이 만들어 진다!!

//disjoint set -> union and find로 구현 

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int unf[1001];


//넘어온 학생의 집합번호를 리턴
int Find(int v){
    if(v==unf[v])return v;
    //tree구조 루트노드를 결국 가리키게 가는 것이다
    //경로를 압축 가능 
    else return unf[v] = Find(unf[v]);
}


void Union(int a, int b){
    a = Find(a);
    b = Find(b);    
    if(a!=b) unf[a] = b;

}

int main(){
    freopen("input.txt","rt",stdin);
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        unf[i] = i;
    }

    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        Union(a,b);
    }

    
}