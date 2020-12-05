//플로이드 워셜 알고리즘 -> 냅색 알고리즘 응용 
//다익스트라,벨만포드-> 한 정점에서 이동할때 구하는 것 
//플로이드 워셜 -> 모든 정점에서 모든 정점 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    vector<vector<int>>dis(n+1,vector<int>(n+1,81));
    
    for(int i=1; i<=n; i++){
        dis[i][i] = 0;        
    }    
    for(int i=1; i<=m; i++){
        int a,b,c;
        cin >> a >> b >> c;w
        dis[a][b] = c;        
    }
    
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                if(dis[i][k]+dis[k][j]<dis[i][j])
                dis[i][j] = dis[i][k] + dis[k][j];
            }        
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(dis[i][j]==81)
            cout << "M";
            else
            cout << dis[i][j];        
            cout << " ";
        }
        cout << endl;
    }

    return 0;

}

    





