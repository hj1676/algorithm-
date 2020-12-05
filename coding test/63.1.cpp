#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, m;
    freopen("input.txt","rt",stdin);
    cin >> n >> m;
    vector<vector<int>>map(n+1,vector<int>(n+1,0));
    for(int i=1; i<=m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        map[a][b] = c;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}