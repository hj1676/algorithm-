#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int h,w;
    freopen("input.txt","rt",stdin);
    cin >> h >> w;
    vector<vector<int>>map(h+1,vector<int>(w+1,0));
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin >> map[i][j];
        }
    }
    int a,b;
    cin >> a >> b;
    vector<vector<int>>dy(h+1,vector<int>(w+1,0));
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            dy[i][j] = dy[i-1][j] + dy[i][j-1] - dy[i-1][j-1] + map[i][j];
        }        
    }
    int max = -2147000000;
    for(int i=a; i<=h; i++){
        for(int j=b; j<=w; j++){
            int res = dy[i][j]-dy[i-a][j]-dy[i][j-b]+dy[i-a][j-b];
            if(res>max)
            max = res;
        }
    }
    cout << max; 



    return 0;
}