//66번 경로탐색 : DFS 인접리스트 방법
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int n, check[21];
int cnt = 0;
vector<int> a[21];
void DFS(int v){
    if(v==n)
    cnt++;
    else{
        for(int i=0; i<a[v].size(); i++){
            if(check[a[v][i]]==0){
                check[a[v][i]] = 1;
                DFS(a[v][i]);
                check[a[v][i]] = 0;
            }

        }

    }

}
int main(){
    freopen("input.txt","rt",stdin);
    cin >> n;
    int m;
    cin >> m;
    for(int i=1; i<=m; i++){
        int p,q;
        cin >> p >> q;
        a[p].push_back(q);        
    }    
    check[1] = 1;
    DFS(1);

    cout << cnt;


    return 0;
}