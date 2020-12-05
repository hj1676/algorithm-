#include<iostream>
#include<vector>
using namespace std;
vector<int>vec[21];
int chk[21],cnt=0,n;
void DFS(int x){
    if(x==n){
        cnt++;
        return;
    }
    else{
        for(int i=0; i<vec[x].size(); i++){
            if(chk[vec[x][i]]!=1){
            chk[vec[x][i]] = 1;
            DFS(vec[x][i]);
            chk[vec[x][i]] = 0;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    int m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        vec[a].push_back(b);
    }
    chk[1] = 1;
    DFS(1);
    cout << cnt;
    return 0;
}