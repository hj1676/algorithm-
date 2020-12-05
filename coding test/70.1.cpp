#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    vector<int>map[21];
    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        map[a].push_back(b);
    }
    int dis[21];
    int chk[21]={0,};
    dis[1] = 0; 
    chk[1] = 1;
    queue<int>Q;
    Q.push(1);
    while(!Q.empty()){
        int x = Q.front();
        Q.pop();
        for(int i=0; i<map[x].size(); i++){
            if(chk[map[x][i]]==0){
            Q.push(map[x][i]);
            dis[map[x][i]] = dis[x]+1;
            chk[map[x][i]]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        cout << i << " : " << dis[i] << endl;
    }





    return 0;
}