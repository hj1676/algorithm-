//알고리즘 14번  -> 위상정렬

//위상정렬에서는 진입 차수 개념이 중요하다 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    vector<int>dy(n+1);
    vector<vector<int>>map(n+1,vector<int>(n+1,0));
    queue<int> Q;
    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;                
        map[a][b]=1;
        dy[b]++;
    }      
    for(int i=1; i<=n; i++){
        if(dy[i]==0)
        Q.push(i);        
    }         
    while(!Q.empty()){           
        int tmp = Q.front();
        Q.pop();
        cout << tmp << " ";                
        for(int i=1; i<=n; i++){
            if(map[tmp][i]==1){
            dy[i]--;            
            if(dy[i]==0)
            Q.push(i);             
            }
        } 
       
    }
    return 0;
}