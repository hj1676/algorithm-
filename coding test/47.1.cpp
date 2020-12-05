#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    freopen("input.txt","rt",stdin);
    cin >> n;
    vector<vector<int>>map(n+2,vector<int>(n+2,0));
    
        
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> map[i][j];
        }
    }
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int cnt = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int flag = 1;
            for(int k=0; k<4; k++){                
                if(map[i][j]<=map[i+dx[k]][j+dy[k]]){
                flag = -1;            
                break;
                }
            }
            if(flag==1)
            cnt++;
        }
    }
    cout << cnt;



    return 0;
}
