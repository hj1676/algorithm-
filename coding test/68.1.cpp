#include<iostream>
#include<vector>
using namespace std;
int n, chk[21];
vector<pair<int,int>>vec[21];
int mi = 2147000000;

void DFS(int x, int sum){    
    if(x==n){
        if(sum < mi)
        mi = sum;
        return;
    }
    else{        
        for(int i=0; i<vec[x].size(); i++){
            if(chk[vec[x][i].first]==0){
                chk[vec[x][i].first] = 1;
                DFS(vec[x][i].first, sum+vec[x][i].second);
                chk[vec[x][i].first] = 0;
            }
        }
    }
}

int main(){
    int m;
    ios_base::sync_with_stdio(false);
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    for(int i=1; i<=m; i++){    
        int a,b,c;
        cin >> a >> b >> c;
        vec[a].push_back(make_pair(b,c));
    }
    chk[1] = 1;
    DFS(1,0);

    cout << mi;
    return 0;
}